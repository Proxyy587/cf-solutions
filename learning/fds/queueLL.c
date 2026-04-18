#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* front = NULL;
struct node* rear = NULL;

void enqueue(int val){
    struct node* newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;

    if(rear == NULL){
        front = rear = newNode;
    } else{
        rear->next = newNode;
        rear = newNode;
    }
    printf("Enqueue: %d\n", val);
}

int dequeue(){
    if(front == NULL) {
        printf("No items in the queue");
        return 0;
    }
    struct node* temp = front;

    int val = front->data;
    front = front->next;
    free(temp);
    temp = NULL;
    printf("Dequeue item %d\n", val);
    return val;
}

void display(){
    if(rear == NULL){
        printf("Queue underflow");
        return;
    }
    struct node* temp = front;

    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    display();              

    dequeue();               
    dequeue();              

    display();              

    enqueue(60); 
}