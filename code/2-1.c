#include <stdio.h>

void func(int x) {
    x++;
    printf("%d\n", x);
}

int main() {
    int x = 10;
    func(x);
    printf("%d\n", x);
    return 0;
}
