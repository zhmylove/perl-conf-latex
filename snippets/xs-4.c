XS_EUPXS(XS_Mytest_foo); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Mytest_foo)
{
    dVAR; dXSARGS;
    if (items != 1)
       croak_xs_usage(cv,  "var");
    {
    struct foo    var = XS_unpack_struct_foo(ST(0))
;

    foo(var);
    }
    XSRETURN_EMPTY;
}
