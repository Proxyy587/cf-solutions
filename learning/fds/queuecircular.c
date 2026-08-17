#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1;
int rear  = -1;

// ─── isEmpty ──────────────────────────────────────
int isEmpty() {
    return front == -1;
}

// ─── isFull ───────────────────────────────────────
int isFull() {
    return (rear + 1) % MAX == front;
}

// ─── enqueue ──────────────────────────────────────
void enqueue(int x) {
    if (isFull()) {
        printf("Queue is FULL! Cannot enqueue %d\n", x);
        return;
    }
    if (isEmpty()) {
        front = 0;   // first element, set front
    }
    rear = (rear + 1) % MAX;   // wrap around
    queue[rear] = x;
    printf("Enqueued: %d\n", x);
}

// ─── dequeue ──────────────────────────────────────
int dequeue() {
    if (isEmpty()) {
        printf("Queue is EMPTY! Cannot dequeue.\n");
        return -1;
    }
    int val = queue[front];

    if (front == rear) {
        // last element removed, reset queue
        front = -1;
        rear  = -1;
    } else {
        front = (front + 1) % MAX;  // wrap around
    }

    printf("Dequeued: %d\n", val);
    return val;
}

// ─── peek ─────────────────────────────────────────
int peek() {
    if (isEmpty()) {
        printf("Queue is EMPTY!\n");
        return -1;
    }
    return queue[front];
}

// ─── display ──────────────────────────────────────
void display() {
    if (isEmpty()) {
        printf("Queue is EMPTY!\n");
        return;
    }
    printf("Circular Queue [front -> rear]: ");
    int i = front;
    while (1) {
        printf("%d ", queue[i]);
        if (i == rear) break;
        i = (i + 1) % MAX;
    }
    printf("\n");
    printf("front = %d, rear = %d\n", front, rear);
}

// ─── size ─────────────────────────────────────────
int size() {
    if (isEmpty()) return 0;
    if (rear >= front)
        return rear - front + 1;
    else
        return (MAX - front) + (rear + 1);
}

// ─── main ─────────────────────────────────────────
int main() {
    printf("=== Circular Queue Demo (MAX = %d) ===\n\n", MAX);

    // --- Basic enqueue ---
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    display();

    printf("\n--- Dequeue twice ---\n");
    dequeue();
    dequeue();
    display();

    printf("\n--- Enqueue 50 and 60 (reuses freed slots) ---\n");
    enqueue(50);
    enqueue(60);
    display();

    printf("\n--- Try to enqueue 70 (should be FULL) ---\n");
    enqueue(70);

    printf("\n--- Peek at front ---\n");
    printf("Front element: %d\n", peek());

    printf("\n--- Size of queue ---\n");
    printf("Current size: %d\n", size());

    printf("\n--- Dequeue all elements ---\n");
    while (!isEmpty())
        dequeue();

    printf("\n--- Try to dequeue from empty ---\n");
    dequeue();

    return 0;
}