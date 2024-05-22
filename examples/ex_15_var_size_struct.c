#include <stdlib.h>

// unsupported by compcert c
// include anyway
struct FlexibleArray {
    int size;
    struct Node* next;
    int data[];
};


int main() {
    struct FlexibleArray* fa = (struct FlexibleArray*) malloc(sizeof(struct FlexibleArray) + 10 * sizeof(int));
    fa->size = 10;
    fa->next = fa;
    fa->data[0] = 0xDEADBEEF;
}


