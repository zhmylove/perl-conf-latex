// gcc -shared -fPIC -o libfoo.so foo.c
#include <stdio.h>
#include "foo.h"
void foo(struct foo variable) {
    fprintf(stdout, "%d %s", variable.number, variable.string);
}
