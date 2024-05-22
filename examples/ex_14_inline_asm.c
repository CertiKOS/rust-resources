int main() {
    int a = 5;
    int b = 10;
    int result;

    __asm__ (
        "addl %%ebx, %%eax;"
        : "=a" (result)
        : "a" (a), "b" (b)
    );

    return 0;
}

