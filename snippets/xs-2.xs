MODULE = Mytest		PACKAGE = Mytest

void
xs(int number, char* string)
    CODE:
        struct foo var = { number, string };
        foo(var);
