#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
} *top = NULL;


int isEmpty(){
    if(top == NULL) return 1;
    else return 0;
}

void push(int data){
    struct node* temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->next = top;
    top = temp;
    printf("Pushed element: %d\n", data);
}

int pop(){
    if(isEmpty()){
        printf("Stack Underflows");
        return 0;
    }
    int val;
    struct node* temp = top;
    val = temp->data;
    top = top->next;
    free(temp);
    temp = NULL;
    return val;
}

void print(){
    if(isEmpty()){
        printf("Stack Underflowz");
        return;
    }
    
    struct node* temp = top;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int peek(){
    if(isEmpty()){
        printf("Stack underflow");
        return  0;
    }
    
    return top->data;
}


int main(){
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
}