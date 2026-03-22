#include <stdio.h>

int global_var = 0;

void func() {
    static int static_var = 0;
    int local_var = 0;
    global_var++;
    static_var++;
    local_var++;
    printf("global_var: %d\n", global_var);
    printf("static_var: %d\n", static_var);
    printf("local_var: %d\n", local_var);
    printf("\n");
}

int main() {
    func();
    func();
    func();
    return 0;
}
