int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b != 0) {
        return a/b;
    }
        return -1;
}

int main() {
    int (*operations[4])(int, int) = { add, subtract, multiply, divide };

    int choice;
    int x = 20, y = 10;

    for (choice = 0; choice < 4; choice++) {
        operations[choice](x, y);
    }

    return 0;
}
