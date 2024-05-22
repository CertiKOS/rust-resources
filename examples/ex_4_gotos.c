int sample(int a) {
    int result = 0;

    if (a == 1) {
        goto answer_1;
    } else if (a == 2) {
        goto answer_2;
    } else if (a == 3) {
        goto answer_3;
    } else {
        goto answer_4;
    }

answer_1:
    result = 1;
    goto end;

answer_2:
    result = 2;
    goto end;

answer_3:
    result = 4;
    goto end;

answer_4:
    result = 3;
    goto end;

end:
    return result;
}

