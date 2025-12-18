#include <stdio.h>

int change(int *a) {
    *a = 77;
    return *a;
}

int main(void) {
    int n = 22;
    printf("%d\n", n); // prints 77
    return 0;
}