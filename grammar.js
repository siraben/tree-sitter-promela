module.exports = grammar({
    name: 'promela',
    extras: $ => [
        /\s/,
        $.comment,
    ],
    conflicts: $ => [
        [$.step, $.one_decl],
        [$.rarg, $.expr],
        [$.inst, $.const],
        [$.pfld, $.const],
    ],
    rules: {
        program: $ => repeat($._unit),
        _unit: $ => choice(
            $.proc,
            $.init,
            // $.claim,
            $.ltl,
            // $.eventsc,
            $.one_decl,
            // $.utype,
            // $.c_fcts,
            // $.ns,
            $._semi,
            // $.error
        ),
        priority: $ => seq('priority', $.const),
        init: $ => seq('init', optional($.priority), $.body),
        ltl: $ => seq('ltl',optional($._name),$.ltl_body),
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
        sequence: $ => prec.left(2,sep1($.step,optional($._ms))),
        arg: $ => choice(
            $.expr,
            seq($.expr, ',', $.arg)
        ),
        margs: $ => choice(
            $.arg,
            seq($.expr, '(', $.arg, ')')
        ),
        _ms: $ => repeat1(';'),
        decl: $ => sep1($.one_decl,$._semi),
        step: $ => choice(
            $.one_decl,
            $.stmnt,
            seq($.stmnt, 'unless', $.stmnt),
        ),
        stmnt: $ => choice($.Special, $.Stmnt),
        Stmnt: $ => choice(
            $.assignment,
            seq($.varref, '++'),
            seq($.varref, '--'),
            // seq($.set_p,'(',$.two_args,')'),
            $.printf,
            // seq($.printm,'(',$.varref,')'),
            // seq($.printm,'(',$.const,')'),
        ),
        assignment: $ => seq($.varref, '=', $.full_expr),
        printf: $ => seq('printf', '(', $.string, optional(seq(',', $.arg)), ')'),
        string: $ => seq('"', /(?:[^"\\]|\\.)*/, '"'),
        Special: $ => choice(
            seq($.varref, '?', $.rargs),
            seq($.varref, '!', $.margs),
            // seq($.for_pre,':',$.expr,'..',$.expr,')',$.for_post),
            // seq($.for_pre,'in',$.varref,')',$.for_post),
            seq('select','(', $.varref,':',$.expr,'..',$.expr,')'),
            $.if,
            // seq('do',$.options,'od'),
            'break',
            // seq('goto',$.name),
            // seq($.name,':',$.stmnt),
            // seq($.name,':'),
            // $.error
        ),
        rarg: $ => choice(
            $.varref,
            seq('eval','(',$.expr,')'),
            $.const,
            seq('-',$.const),
        ),
        rargs: $ => choice(
            $.rarg,
            seq($.rarg,',',$.rargs),
            seq($.rarg,'(',$.rargs,')'),
            seq('(',$.rargs,')'),
        ),
        if: $ => seq('if',repeat(seq('::',$.sequence,optional($._semi))),'fi'),
        for_pre: $ => seq('for','(',$.varref),
        // options: $ => sep1($.option),
        // option: $ => choice('::', seq($.sequence,optional($._semi))),
        vis: $ => choice('hidden', 'show', 'islocal'),
        osubt: $ => seq(':', $._name),
        // user defined type
        uname: $ => /\w+/,
        one_decl: $ => choice(
            seq(optional($.vis), $.type, optional($.osubt), $.var_list),
            seq(optional($.vis), $.uname, $.var_list),
            seq(optional($.vis), $.type, optional($.asgn),'{',$.nlst,'}'),
            $.stmnt,
        ),
        nlst: $ => choice(
            $._name,
            seq($.nlst,$._name),
            seq($.nlst,','),
        ),
        asgn: $ => choice(seq(':',$._name,'='),'='),
        full_expr: $ => choice($.expr, $.Expr),
        ltl_expr: $ => choice(
            // seq($.expr,'until',$.expr),
            // seq($.expr,'release',$.expr),
            // seq($.expr,'weakuntil',$.expr),
            prec.left(2,seq($.expr,'->',$.expr)), // implies
            // seq($.expr,'<->',$.expr), // equivalent
            prec.left(1,seq('X',$.expr)), // next
            prec.left(1,seq('[]',$.expr)), // always
            prec.left(1,seq('<>',$.expr)), // eventually

        ),
        varref: $ => $.cmpnd,
        cmpnd: $ => choice($.pfld,
                           // $.sfld,
                          ),
        _name: $ => /\w+/,
        pfld: $ => choice($._name, seq($._name, '[', $.expr, ']')),
        sfld: $ => prec.right(1, sep1($.cmpnd, '.')),
        type: $ => choice('bit','bool','byte','chan','int','mtype','pid','short'),
        var_list: $ => commaSep1($.ivar),
        const: $ => choice('false', 'true','skip',$.number,$._name),
        vardcl: $ => prec.right(2,choice(
            $._name,
            seq($._name,':',$.const),
            seq($._name,'[',$.const_expr,']'),
            seq($._name,'[',$._name,']'),
        )),
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
        c_list: $ => commaSep1($.const),
        ivar: $ => choice(
            $.vardcl,
            seq($.vardcl,'=','{',$.c_list,'}'),
            seq($.vardcl,'=',$.expr),
            seq($.vardcl,'=',$.ch_init),
        ),
        ch_init: $ => seq('[',$.const_expr,']','of', '{',$.typ_list,'}'),
        oname: $ => seq(':',$._name),
        basetype: $ => choice(
            seq($.type,optional($.oname)),
            $.uname
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
            prec.left(2,seq($.expr,'+',$.expr)),
            prec.left(2,seq($.expr,'-',$.expr)),
            prec.left(1,seq($.expr,'*',$.expr)),
            // prec.left(1,seq($.expr,'/',$.expr)),
            // prec.left(1,seq($.expr,'%',$.expr)),
            // prec.left(1,seq($.expr,'&',$.expr)),
            // prec.left(1,seq($.expr,'^',$.expr)),
            // prec.left(1,seq($.expr,'|',$.expr)),
            // prec.left(1,seq($.expr,'>',$.expr)),
            // prec.left(1,seq($.expr,'<',$.expr)),
            // prec.left(1,seq($.expr,'>=',$.expr)),
            // prec.left(1,seq($.expr,'<=',$.expr)),
            prec.left(3,seq($.expr,'==',$.expr)),
            // prec.left(1,seq($.expr,'!=',$.expr)),
            // prec.left(1,seq($.expr,'&&',$.expr)),
            prec.left(2,seq($.expr,'||',$.expr)),
            // prec.left(1,seq($.expr,'<<',$.expr)),
            // prec.left(1,seq($.expr,'>>',$.expr)),
            $.const,
            $.ltl_expr,
        ),
        Expr: $ => choice(
            // $.Probe,
            seq('(',$.Expr,')'),
            prec.left(2,seq($.Expr,'&&',$.Expr)),
            prec.left(2,seq($.Expr,'&&',$.expr)),
            prec.left(2,seq($.expr,'&&',$.Expr)),
            prec.left(2,seq($.Expr,'||',$.Expr)),
            prec.left(2,seq($.Expr,'||',$.expr)),
            prec.left(2,seq($.expr,'||',$.Expr)),
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

