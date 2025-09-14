struct foo XS_unpack_struct_foo(SV *var) {
    return (struct foo){666, "it works\n"};
}

MODULE = Mytest		PACKAGE = Mytest

void
foo(struct foo var)
