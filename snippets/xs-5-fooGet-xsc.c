...
    dVAR; dXSARGS;
    if (items != 0)
       croak_xs_usage(cv,  "");
    {
	struct foo	RETVAL;
	RETVAL = fooGet();
	{
	    SV * RETVALSV;
	    RETVALSV = sv_newmortal();
	HV* hash = newHV();
	hv_stores(hash, "number", newSViv(RETVAL.number));
	hv_stores(hash, "string", newSVpv(RETVAL.string, 0));
	RETVALSV = sv_2mortal(newRV_noinc((SV*)hash));
	    ST(0) = RETVALSV;
	}
    }
    XSRETURN(1);
