#include <stdio.h>

void func(int x) {
    x++;
    printf("%d\n", x);
}

int main() {
    int x = 10;
    printf("%d\n", x);
    func(x);
    printf("%d\n", x);
    return 0;
}

