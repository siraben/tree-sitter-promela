module.exports = grammar({
    name: 'promela',
    extras: $ => [
        /\s/,
        $.comment,
    ],
    rules: {
        program: $ => repeat($._unit),
        _unit: $ => choice(
            $.proc,
            // $.init,
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
        _semi: $ => choice(';',$.arrow),
        arrow: $ => '->',
        proc: $ => choice(
            seq(// optional($.inst),
                'proctype', /\w+/, $.decl, $.body)
        ),
        body: $ => seq('{',repeat(seq($.step,$._ms)),'}'),
        _ms: $ => repeat1(';'),
        decl: $ => seq('(',
                       // optional($.entries),
                       ')'),
        step: $ => choice(
            $.one_decl
        ),
        vis: $ => choice('hidden','show','islocal'),
        one_decl: $ => choice(seq(optional($.vis),$.type,$.var_list),
                              seq($.varref,'=',$.full_expr),
                             ),
        full_expr: $ => choice($.expr, $.Expr),
        varref: $ => $.cmpnd,
        cmpnd: $ => choice($.pfld
                           //  $.sfld
                          ),
        _name: $ => /\w+/,
        pfld: $ => choice($._name,seq($._name),'[',$.expr,']'),
        sfld: $ => prec.right(1,sep1($.cmpnd, '.')),
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
