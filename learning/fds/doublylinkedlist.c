#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
    struct node* prev;
};

struct node* add(struct node* head, int data){
    struct node* temp = malloc(sizeof(struct node));
    temp->prev= NULL;
    temp->next = NULL;
    temp->data= data;
    
    head = temp;
    return temp;
}

struct node* addstart(struct node* head, int data){
    struct node* temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;
    
    head->prev = temp;
    temp->next = head;
    head = temp;
    return head;
}

struct node* addend(struct node* head, int data){
    struct node* temp = malloc(sizeof(struct node));
    
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;
    
    struct node* curr = head;
    
    while(curr->next != NULL){
        curr = curr->next;
    }
    
    curr->next = temp;
    temp->prev = curr;
    
    return head;
}

struct node* addk(struct node* head, int data, int k){
    struct node* temp = head;
    struct node* ptr = NULL;

    struct node* newNode = malloc(sizeof(struct node));
    
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    
    if(k == 1){
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
        return head;
    }
    
    while(k != 2){
        temp= temp->next;
        k--;
    }
    
    
    if(temp->next == NULL){
        temp->next = newNode;
        newNode->prev = temp;
    }
    else{
        ptr = temp->next;
        temp->next = newNode;
        ptr->prev = newNode;
        newNode->next = ptr;
        newNode->prev = temp;
    }
    return head;
}

void print(struct node* head){
    struct node* ptr = head;
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

struct node* deletefirst(struct node* head){
    struct node* temp = head;
    head = temp->next;
    temp->next = NULL;
    head->prev=NULL;
    free(temp);
    temp = NULL;
    return head;
}

struct node* deletelast(struct node* head){
    struct node* temp = head;
    struct node* prev = head;
    
    while(temp->next != NULL){
        prev = temp;
        temp = temp->next;
    }
    
    prev->next = NULL;
    temp->prev = NULL;
    free(temp);
    temp = NULL;
    
    
    return head;
}

struct node* deletek(struct node* head, int k){
    struct node* temp = head;
    struct node* ptr = NULL;
    
    while(k != 2){
        temp = temp->next;
        k--;
    }
    struct node* curr = temp->next;
    
    if(curr->next != NULL){
        ptr = temp->next->next;
        ptr->prev = temp;
        temp->next = ptr;
    }
    else{
        temp->next = NULL;
    }
    free(curr);
    curr = NULL;
    
    return head;
    
}

int main() {
	struct node* head = NULL;
	head = add(head, 56);
	
	head = addstart(head, 46);
	
	head = addend(head, 34);
	head = addend(head, 14);
	head = addend(head, 11);
    
	head = addk(head, 4, 4);
	
	head = deletefirst(head);
	head = deletelast(head);
	head = deletek(head, 2);
	
	
	printf("%d\n", head->data);
	print(head);

}

