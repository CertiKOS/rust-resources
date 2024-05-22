union Data {
    int i;
    float f;
};

int main() {
    union Data data;

    data.i = 0xDEADBEEF;

    return 0;
}

