#include <stdio.h>

void printMessage();
int square(int);

int main() {
    printMessage();
    printf("%d %d\n", 5, square(5));
    return 0;
}

void printMessage() {
    printf("Welcome to Computer Programming 03 Lab!\n");
}

int square(int x) {
    return x * x;
}
