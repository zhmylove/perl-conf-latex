// gcc -I../foo -o bar bar.c -L../foo -lfoo
#include "foo.h"
int main() {
   foo();
   return 0;
}
