XS_EUPXS(XS_Mytest_foo); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Mytest_foo)
{
    dVAR; dXSARGS;
    if (items != 1)
       croak_xs_usage(cv,  "var");
    {
	struct foo	var;

    var.number = 777;
    var.string = "this too\n"
;

	foo(var);
    }
    XSRETURN_EMPTY;
}
