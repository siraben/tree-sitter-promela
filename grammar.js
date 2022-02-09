module.exports = grammar({
    name: 'promela',
    extras: $ => [
        /\s/,
        $.comment,
    ],
    conflicts: $ => [
        [$.Stmnt, $.one_decl],
    ],
    rules: {
        program: $ => repeat($._unit),
        _unit: $ => choice(
            $.proc,
            $.init,
            // $.claim,
            // $.ltl,
            // $.eventsc,
            $.one_decl,
            // $.utype,
            // $.c_fcts,
            // $.ns,
            $._semi,
            // $.error
        ),
        priority: $ => seq('priority', 'const'),
        init: $ => seq('init', optional($.priority), $.body),
        _semi: $ => choice(';', $.arrow),
        arrow: $ => '->',
        proc: $ => choice(
            seq(// optional($.inst),
                'proctype', /\w+/, $.decl, $.body)
        ),
        body: $ => seq('{', repeat(seq($.step, optional($._ms))), '}'),
        arg: $ => choice(
            $.expr,
            seq($.expr, ',', $.arg)
        ),
        margs: $ => choice(
            $.arg,
            seq($.expr, '(', $.arg, ')')
        ),
        _ms: $ => repeat1(';'),
        decl: $ => seq('(',
            // optional($.entries),
            ')'),
        step: $ => choice(
            $.one_decl,
            $.stmnt,
            seq($.stmnt, 'unless', $.stmnt),
        ),
        stmnt: $ => choice($.Special, $.Stmnt),
        Stmnt: $ => choice(
            seq($.varref, '=', $.full_expr),
            seq($.varref, '++'),
            seq($.varref, '--'),
            // seq($.set_p,'(',$.two_args,')'),
            $.printf,
            // seq($.printm,'(',$.varref,')'),
            // seq($.printm,'(',$.const,')'),
        ),
        printf: $ => seq('printf', '(', $.string, optional(seq(',', $.arg)), ')'),
        string: $ => seq('"', /(?:[^"\\]|\\.)*/, '"'),
        Special: $ => choice(
            // seq($.varref, 'rcv', $.rargs),
            // seq($.varref, 'snd', $.margs),
            // seq($.for_pre,':',$.expr,'..',$.expr,')',$.for_post),
            // seq($.for_pre,'in',$.varref,')',$.for_post),
            // seq('select','(', $.varref,':',$.expr,'..',$.expr,')'),
            // seq('if',$.options,'fi'),
            // seq('do',$.options,'od'),
            'break',
            // seq('goto',$.name),
            // seq($.name,':',$.stmnt),
            // seq($.name,':'),
            // $.error

        ),
        // options: $ => sep1($.option),
        // option: $ => choice($.sep, seq($.sequence,optional($._semi))),


        vis: $ => choice('hidden', 'show', 'islocal'),
        osubt: $ => seq(':', $._name),
        one_decl: $ => choice(seq(optional($.vis), $.type, optional($.osubt), $.var_list),
            seq($.varref, '=', $.full_expr),
        ),
        full_expr: $ => choice($.expr, $.Expr),
        varref: $ => $.cmpnd,
        cmpnd: $ => choice($.pfld
            //  $.sfld
        ),
        _name: $ => /\w+/,
        pfld: $ => choice($._name, seq($._name), '[', $.expr, ']'),
        sfld: $ => prec.right(1, sep1($.cmpnd, '.')),
        type: $ => /\w+/,
        var_list: $ => commaSep1(/\w+/),
        // entries: $ => repeat1($.entry)
        expr: $ => choice(
            $.term,
            $.factor,
            $.number
        ),
        Expr: $ => 'Expr',
        number: $ => /\d+/,
        factor: $ => prec.left(2, seq($.expr, '*', $.expr)),
        term: $ => prec.left(1, seq($.expr, '+', $.expr)),
        comment: $ => token(choice(
            seq('//', /.*/),
            seq(
                "/*",
                repeat(choice(
                    /[^*]/,
                    /\*[^/]/,
                )),
                "*/"
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
