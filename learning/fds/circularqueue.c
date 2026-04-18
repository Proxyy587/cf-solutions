#include<stdio.h>
#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

int isFull(){
    return (rear + 1) % MAX == front;
}

int isEmpty(){
    return front == -1;
}

int main(){
    
}