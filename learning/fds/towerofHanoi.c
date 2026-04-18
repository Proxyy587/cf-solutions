#include <stdio.h>

int moveCount = 0; 

void hanoi(char a, char b, char c, int n) {
    if (n == 1) {
        moveCount++;
        printf("Move %d: Disk 1 from %c → %c\n", moveCount, a, b);
        return;
    }

    hanoi(a, c, b, n-1);

    moveCount++;
    printf("Move %d: Disk %d from %c → %c\n", moveCount, n, a, b);

    hanoi(c, b, a, n-1);
}

int main() {
    int n = 2;
    printf("Tower of Hanoi with %d disks:\n\n", n);
    hanoi(n, 'A', 'C', 'B');
    printf("\nTotal moves = %d\n", moveCount);
    // printf("Formula: 2^%d - 1 = %d\n", n, (1 << n) - 1);
    return 0;
}