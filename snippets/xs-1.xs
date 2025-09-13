#define PERL_NO_GET_CONTEXT
#include "EXTERN.h"
#include "perl.h"
#include "XSUB.h"

#include "ppport.h"

#include "foo.h"


MODULE = Mytest		PACKAGE = Mytest		

void
xs()
    CODE:
        foo();
