int main() {
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *ptr1 = array;
    int *ptr2 = array + 5;

    ptr1[2];
    *(ptr2 - 3);

    ptr1++;
    ptr2--;

    int *ptr3 = ptr1 + 3;

    int diff = ptr2 - ptr1;

    int **ptr_ptr = &ptr1;

    int *ptr4 = ptr2 + (-2);
    return 0;
}

