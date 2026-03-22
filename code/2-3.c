#include <stdio.h>

void divide(int a, int b, int *q, int *r) {
    *q = a / b;
    *r = a % b;
}

int main() {
    int a = 27, b = 4, q, r;
    divide(a, b, &q, &r);
    printf("%d\n", q);
    printf("%d\n", r);
    return 0;
}
