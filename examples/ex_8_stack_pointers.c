
int pointer_weirdness(void** b) {
        int** c = (int**)b;
        return *c[1] + 2;
}


int heap_allocate() {
        int a[] = {1, 2, 3, 4, 5};
        int* b = (void*)a;
        pointer_weirdness(&b);
        pointer_weirdness(&b);
        return a[3];
}

int main() {
        return 0;
}
