_Noreturn void noreturn_func(void) { while(1) {} }

struct __attribute__((__packed__)) PackedStruct {
        char a;
        int b;
};
__inline__ void inline_func(void) { }

void restrict_func(int * __restrict__ a, int * __restrict__ b) {
    int __const__ constant_value = 42;
    const int another_constant_value = 24;
    *a = *b + 10;
    // generic unsupported
    // int int_var = 1;
    // double double_var = 2.0;
    // const char* type_str = _Generic(int_var, int: "int", double: "double", default: "unknown");
    // type_str = _Generic(double_var, int: "int", double: "double", default: "unknown");

    // static_assert ignored
    // _Static_assert(sizeof(int) == 4, "");
}

int main(){}
