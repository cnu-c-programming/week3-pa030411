#include <stdio.h>
#include <stdarg.h>

int max_of(int count, ...) {
    va_list args;
    va_start(args, count);
    int max = va_arg(args, int);
    for (int i = 1; i < count; i++) {
        int val = va_arg(args, int);
        if (val > max) max = val;
    }
    va_end(args);
    return max;
}

int main() {
    printf("%d\n", max_of(4, 1, 5, 12, 3));
    printf("%d\n", max_of(3, 6, 2, 4));
    printf("%d\n", max_of(5, 100, 200, 300, 50, 250));
    return 0;
}
