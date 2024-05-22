void counter() {
    static int count = 0;
    count++;
}

int main() {
    counter();
    counter();
    counter();
    counter();

    return 0;
}
