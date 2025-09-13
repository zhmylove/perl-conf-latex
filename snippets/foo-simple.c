// gcc -shared -fPIC -o libfoo.so foo.c
#include <stdio.h>
#include "foo.h"
void foo() {
    fprintf(stdout, "japh,\n");
}
