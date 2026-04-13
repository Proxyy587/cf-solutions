#include <stdio.h>
#define MAX 4

int stack_arr[MAX];
int top = -1;

void push(int data){
    if(isFull()){
        printf("Stack Overflow");
        return;
    }
    
    top = top + 1;
    stack_arr[top] = data;
}


int pop(){
    if(top == -1){
        printf("Stack Underflows");
        exit(1);
    }
    int val;
    val = stack_arr[top];
    top = top - 1;
    return val;
}

void print(){
    if(top == -1){
        printf("Stack Underflowz");
        return;
    }
    
    for(int i = top; i >= 0; i--){
        printf("%d ", stack_arr[i]);
    }
    printf("\n");
}

int isFull(){
    if(top == MAX - 1) return 1;
    else return 0;
}

int isEmpty(){
    if(top == -1) return 1;
    else return 0;
}

int peek(){
    if(isEmpty()){
        printf("Stack underflow");
        return;
    }
    
    return stack_arr[top];
}

int main() {
    int data;
    push(1);
    push(2);
    push(3);
    push(4);
    data = pop();
    data = pop();
    print();
    return 0;
}