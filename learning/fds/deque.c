#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* frontPtr = NULL;
struct Node* rearPtr  = NULL;

struct Node* createNode(int data) {
    struct Node* n =
        (struct Node*)malloc(sizeof(struct Node));
    n->data = data;
    n->prev = NULL;
    n->next = NULL;
    return n;
}

void insertFront(int x) {
    struct Node* newNode = createNode(x);
    if (frontPtr == NULL) {
        frontPtr = rearPtr = newNode;
    } else {
        newNode->next   = frontPtr;
        frontPtr->prev  = newNode;
        frontPtr        = newNode;
    }
    printf("InsertFront(%d)\n", x);
}

void insertRear(int x) {
    struct Node* newNode = createNode(x);
    if (rearPtr == NULL) {
        frontPtr = rearPtr = newNode;
    } else {
        rearPtr->next  = newNode;
        newNode->prev  = rearPtr;
        rearPtr        = newNode;
    }
    printf("InsertRear(%d)\n", x);
}

int deleteFront() {
    if (frontPtr == NULL) {
        printf("Deque empty!\n");
        return -1;
    }
    int val = frontPtr->data;
    struct Node* temp = frontPtr;
    frontPtr = frontPtr->next;
    if (frontPtr != NULL)
        frontPtr->prev = NULL;
    else
        rearPtr = NULL;  
    free(temp);
    printf("DeleteFront() → %d\n", val);
    return val;
}

int deleteRear() {
    if (rearPtr == NULL) {
        printf("Deque empty!\n");
        return -1;
    }
    int val = rearPtr->data;
    struct Node* temp = rearPtr;
    rearPtr = rearPtr->prev;
    if (rearPtr != NULL)
        rearPtr->next = NULL;
    else
        frontPtr = NULL;
    free(temp);
    printf("DeleteRear() → %d\n", val);
    return val;
}

void display() {
    if (frontPtr == NULL) {
        printf("Deque: [empty]\n");
        return;
    }
    struct Node* temp = frontPtr;
    printf("Deque [front→rear]: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    printf("=== Deque Demo ===\n\n");

    insertRear(10);
    insertRear(20);
    insertRear(30);
    display();              // 10 20 30

    insertFront(5);
    display();              // 5 10 20 30

    insertFront(1);
    display();              // 1 5 10 20 30

    deleteFront();
    display();              // 5 10 20 30

    deleteRear();
    display();              // 5 10 20

    insertRear(99);
    display();              // 5 10 20 99

    return 0;
}