module.exports = grammar({
    name: 'promela',
    extras: $ => [
        /\s/,
        $.comment,
    ],
    conflicts: $ => [
        [$.inst, $.const],
        [$.pfld, $.const],
        [$.const, $.uname],
        [$.const, $.iname],
    ],
    rules: {
        program: $ => repeat($._unit),
        _unit: $ => choice(
            $.proc,
            $.init,
            $.claim,
            $.ltl,
            $.events,
            $.one_decl,
            $.utype,
            // $.c_fcts,
            $.ns,
            $._semi,
        ),
        priority: $ => seq('priority', $.const),
        init: $ => seq('init', optional($.priority), $.body),
        ltl: $ => seq('ltl',optional($._name),$.ltl_body),
        claim: $ => seq('never', optional($._name), $.body),
        events: $ => seq(choice('trace','notrace'),$.body),
        utype: $ => seq('typedef', $.uname, '{',sep1($.one_decl,$._semi),'}'),
        ns: $ => seq('inline','(',optional($.arg),')'),
        ltl_body: $ => seq('{',$.full_expr,optional($._semi),'}'),
        _semi: $ => choice(';', $._arrow),
        _arrow: $ => '->',
        proc: $ => seq(
            optional($.inst),
            'proctype', $._name, '(',optional($.decl),')',
            optional($.priority),
            // optional($.enabler),
            $.body,
        ),
        inst: $ => choice(
            'active',
            seq('active','[',$.const_expr,']'),
            seq('active','[',$._name,']'),
        ),
        body: $ => seq('{', repeat(seq($.step, optional($._ms))), '}'),
        sequence: $ => prec.left(4,sep1($.step,optional($._ms))),
        arg: $ => choice(
            $.expr,
            seq($.expr, ',', $.arg)
        ),
        margs: $ => prec.left(2,choice(
            $.arg,
            seq($.expr, '(', $.arg, ')')
        )),
        _ms: $ => repeat1($._semi),
        decl: $ => sep1($.one_decl,$._semi),
        xu: $ => choice("xr","xs"),
        vref_lst: $ => commaSep1($.varref),
        step: $ => prec.right(3,choice(
            $.one_decl,
            seq($.xu, $.vref_lst),
            seq($._name,':',$.one_decl),
            seq($._name,':',$.xu),
            $.stmnt,
            seq($.stmnt, 'unless', $.stmnt),
        )),
        stmnt: $ => choice($.Special, $.Stmnt),
        Stmnt: $ => choice(
            $.assignment,
            prec.left(16,seq($.varref, '++')),
            prec.left(16,seq($.varref, '--')),
            // seq($.set_p,'(',$.two_args,')'),
            $.printf,
            seq('assert',$.full_expr),
            // $.ccode,
            seq($.varref,'??',$.rargs),
            seq($.varref,'?','<',$.rargs,'>'),
            seq($.varref,'??','<',$.rargs,'>'),
            $.full_expr,
            'else',
            seq('atomic','{',$.sequence,optional($._semi),'}'),
            seq('d_step','{',$.sequence,optional($._semi),'}'),
            seq('{',$.sequence,optional($._semi),'}'),
            seq($.iname,'(',optional($.arg),')',$.Stmnt),
            seq($.varref, $._asgn, $.iname,'(',optional($.arg),')',$.Stmnt),
            // seq($.printm,'(',$.varref,')'),
            // seq($.printm,'(',$.const,')'),
        ),
        iname: $ => $._name,
        assignment: $ => seq($.varref, $._asgn, $.full_expr),
        printf: $ => seq('printf', '(', $.string, optional(seq(',', $.arg)), ')'),
        string: $ => seq('"', /(?:[^"\\]|\\.)*/, '"'),
        Special: $ => prec.left(2,choice(
            seq($.varref, '?', $.rargs),
            prec.left(1,seq($.varref, '!', $.margs)),
            // seq($.for_pre,':',$.expr,'..',$.expr,')',$.for_post),
            // seq($.for_pre,'in',$.varref,')',$.for_post),
            seq('select','(', $.varref,':',$.expr,'..',$.expr,')'),
            $.if,
            $.do,
            'break',
            seq('goto',$._name),
            seq($._name,':'),
            seq($._name,':',$.stmnt),
            // $.error
        )),
        rarg: $ => choice(
            $.varref,
            seq('eval','(',$.expr,')'),
            $.const,
            seq('-',$.const),
        ),
        rargs: $ => prec.left(1,choice(
            $.rarg,
            seq($.rarg,',',$.rargs),
            seq($.rarg,'(',$.rargs,')'),
            seq('(',$.rargs,')'),
        )),
        if: $ => seq('if',$.options,'fi'),
        do: $ => seq('do',$.options,'od'),
        for_pre: $ => seq('for','(',$.varref),
        options: $ => repeat1($.option),
        option: $ => seq('::', $.sequence,optional($._semi)),
        vis: $ => choice('hidden', 'show', 'islocal'),
        osubt: $ => seq(':', $._name),
        // user defined type
        _name: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,
        one_decl: $ => prec.left(1,choice(
            seq(optional($.vis), $.type, optional($.osubt), $.var_list),
            seq(optional($.vis), alias($.uname,'type'), $.var_list),
            seq(optional($.vis), $.type, optional($._asgn),'{',$.nlst,'}'),
        )),
        uname: $ => $._name,
        nlst: $ => choice(
            $._name,
            seq($.nlst,$._name),
            seq($.nlst,','),
        ),
        _asgn: $ => prec.right(1,choice(seq(':',$._name,'='),'=')),
        full_expr: $ => choice($.expr, $.Expr),
        ltl_expr: $ => choice(
            // prec 6
            // seq($.expr,'until',$.expr),
            // seq($.expr,'release',$.expr),
            // seq($.expr,'weakuntil',$.expr),
            // end prec 6
            prec.left(2,seq($.expr,'->',$.expr)), // implies
            prec.left(2,seq($.expr,'<->',$.expr)), // equivalent
            prec.right(7,seq('X',$.expr)), // next
            prec.left(5,seq('[]',$.expr)), // always
            prec.left(5,seq('<>',$.expr)), // eventually

        ),
        varref: $ => $.cmpnd,
        cmpnd: $ => prec.left(18,sep1($.pfld,'.')),
        pfld: $ => choice($._name, seq($._name, '[', $.expr, ']')),
        // sfld: $ => prec.left(1,sep1($.cmpnd, '.')),
        type: $ => choice('bit','bool','byte','chan','int','mtype','pid','short'),
        var_list: $ => commaSep1($.ivar),
        const: $ => choice('false', 'true','skip',$.number,$._name),
        vardcl: $ => prec.left(2,choice(
            $.uname,
            seq($.uname,':',$.const),
            seq($.uname,'[',$.const_expr,']'),
            seq($.uname,'[',$.uname,']'),
        )),
        const_expr: $ => choice(
            $.const,
            prec.right(17,seq('-',$.const_expr)), // negation
            seq('(',$.const_expr,')'),
            prec.left(1,seq($.const_expr,'+',$.const_expr)),
            prec.left(1,seq($.const_expr,'-',$.const_expr)),
            prec.right(2,seq($.const_expr,'*',$.const_expr)),
            // seq($.const_expr,'/',$.const_expr),
            // seq($.const_expr,'%',$.const_expr),

        ),
        c_list: $ => commaSep1($.const),
        ivar: $ => prec.left(2,choice(
            $.vardcl,
            seq($.vardcl,'=','{',$.c_list,'}'),
            seq($.vardcl,'=',$.expr),
            seq($.vardcl,'=',$.ch_init),
        )),
        ch_init: $ => seq('[',$.const_expr,']','of', '{',$.typ_list,'}'),
        oname: $ => seq(':',$._name),
        basetype: $ => choice(
            seq($.type,optional($.oname)),
            $._name
        ),
        typ_list: $ => commaSep1($.basetype),
        // entries: $ => repeat1($.entry)
        const_expr: $ => choice(
            $.const,
            prec.right(3,seq('-',$.const_expr)),
            seq('(',$.const_expr,')'),
            prec.left(1,seq($.const_expr,'+',$.const_expr)),
            prec.left(1,seq($.const_expr,'-',$.const_expr)),
            prec.right(2,seq($.const_expr,'*',$.const_expr)),
            // seq($.const_expr,'/',$.const_expr),
            // seq($.const_expr,'%',$.const_expr),

        ),
        expr: $ => choice(
            seq('(',$.expr,')'),
            prec.left(14,seq($.expr,'+',$.expr)),
            prec.left(14,seq($.expr,'-',$.expr)),
            prec.left(15,seq($.expr,'*',$.expr)),
            prec.left(15,seq($.expr,'/',$.expr)),
            prec.left(15,seq($.expr,'%',$.expr)),
            prec.left(10,seq($.expr,'&',$.expr)),
            prec.left(9,seq($.expr,'^',$.expr)),
            prec.left(8,seq($.expr,'|',$.expr)),
            prec.left(12,seq($.expr,'>',$.expr)),
            prec.left(12,seq($.expr,'<',$.expr)),
            prec.left(12,seq($.expr,'>=',$.expr)),
            prec.left(12,seq($.expr,'<=',$.expr)),
            prec.left(11,seq($.expr,'==',$.expr)),
            prec.left(11,seq($.expr,'!=',$.expr)),
            prec.left(4,seq($.expr,'&&',$.expr)),
            prec.left(3,seq($.expr,'||',$.expr)),
            prec.left(13,seq($.expr,'<<',$.expr)),
            prec.left(13,seq($.expr,'>>',$.expr)),
            $.const,
            $.ltl_expr,
        ),
        Expr: $ => choice(
            // $.Probe,
            seq('(',$.Expr,')'),
            prec.left(4,seq($.Expr,'&&',$.Expr)),
            prec.left(4,seq($.Expr,'&&',$.expr)),
            prec.left(4,seq($.expr,'&&',$.Expr)),
            prec.left(3,seq($.Expr,'||',$.Expr)),
            prec.left(3,seq($.Expr,'||',$.expr)),
            prec.left(3,seq($.expr,'||',$.Expr)),
        ),
        number: $ => /\d+/,
        comment: $ => token(choice(
            seq('//', /.*/),
            seq(
                '/*',
                repeat(choice(
                    /[^*]/,
                    /\*[^/]/,
                )),
                '*/'
            )))
    }
});

function sep(rule, separator) {
    return optional(sep1(rule, separator));
}

function sep1(rule, separator) {
    return seq(rule, repeat(seq(separator, rule)));
}

function commaSep1(rule) {
    return sep1(rule, ',');
}

function commaSep(rule) {
    return optional(commaSep1(rule));
}

