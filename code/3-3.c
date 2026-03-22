#include <stdio.h>
#include <stdarg.h>

int average(int count, ...) {
    va_list args;
    va_start(args, count);
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += va_arg(args, int);
    }
    va_end(args);
    return sum / count;
}

int main() {
    printf("%d\n", average(2, 10, 30));
    printf("%d\n", average(3, 20, 30, 40));
    return 0;
}

