int global_counter = 0;
const int data = 0;

void increment_counter() {
    global_counter++;
}

int main() {
    increment_counter();
    increment_counter();
    increment_counter();
    increment_counter();
    increment_counter();

    return 0;
}
