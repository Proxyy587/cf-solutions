#include <stdio.h>
#define MAX 5


int queue_arr[MAX];
int front = -1;
int rear = -1;

int isEmpty(){
    return front == -1;
}

int isFull(){
    return rear == MAX-1;
}

void enqueue(int val){
    if(isFull()){
        printf("Queue Overflow");
        return;
    }
    if(isEmpty()){
        front = 0;
    }
    rear++;
    queue_arr[rear] = val;
    printf("Enqueued item %d\n", val);
}

int dequeue(){
    if(isEmpty()){
        printf("Queue Underflow\n");
        return 0;
    }
    int val = queue_arr[front];

    if(front == rear) {
        front = -1;
        rear = -1;
    } else {
        front++;
    }
    printf("Dequeue Item %d\n", val);
    return val;
}

int peek(){
    if(isEmpty()){
        printf("queue underflow");
        return 0;
    }
    return queue_arr[front];
}

void display(){
    if(isEmpty()){
        printf("queue empty");
        return;
    }
    for(int i = front; i <= rear; i++){
        printf("%d ", queue_arr[i]);
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

    printf("Front: %d\n", peek()); 

    dequeue();               
    dequeue();              

    display();              

    enqueue(60); 

    return 0;
}