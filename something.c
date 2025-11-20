#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    int n;
    scanf("%d", &n);

    if(n == 0){
        printf(0);

    } else if (n == 1) {
        printf(1);
    }
    else {
        printf("%d", fibonacci(n));
    }


    return 0;
}