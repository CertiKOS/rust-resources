#include <stdlib.h>

int pointer_weirdness(int** b) {
        return *b[1] + 2;
}


int heap_allocate() {
        int* a = (int*) malloc(5 * sizeof(int));
        pointer_weirdness(&a);
        pointer_weirdness(&a);
        return a[3];
}

int main() {
        return 0;
}
