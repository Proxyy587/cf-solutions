#include <stdio.h>
#define MAX 4

int stack_arr[MAX];
int top = -1;


int isFull(){
    if(top == MAX - 1) return 1;
    else return 0;
}

int isEmpty(){
    if(top == -1) return 1;
    else return 0;
}

void push(int data){
    if(isFull()){
        printf("Stack Overflow");
        return;
    }
    top++;
    stack_arr[top] = data;
}


int pop(){
    if(isEmpty()){
        printf("Stack Underflows");
        return 0;
    }
    int val;
    val = stack_arr[top];
    top--;
    return val;
}

void print(){
    if(isEmpty()){
        printf("Stack Underflowz");
        return;
    }
    
    for(int i = top; i >= 0; i--){
        printf("%d ", stack_arr[i]);
    }
    printf("\n");
}


int peek(){
    if(isEmpty()){
        printf("Stack underflow");
        return  0;
    }
    
    return stack_arr[top];
}

int main() {
    int data, choice;

    while(1){
        printf("Enter your choice: \n1. Push\n2. Pop\n3. Print\n4. Peek\n5. Exit\n");
        scanf("%d", &choice);
        
        switch(choice){
            case 1:
                printf("Enter data to push: ");
                scanf("%d", &data);
                push(data);
                break;
            case 2:
                data = pop();
                printf("Popped element: %d\n", data);
                break;
            case 3:
                print();
                break;
            case 4:
                data = peek();
                printf("Top element: %d\n", data);
                break;
            case 5:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}