#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* next;
};

struct node* convert(int arr[], int n) {
	if(n == 0) return NULL;

	struct node* head = malloc(sizeof(struct node));

	head->data = arr[0];
	head->next = NULL;

	struct node* mover = head;

	for(int i = 1; i < n; i++) {
		struct node* temp = malloc(sizeof(struct node));
		temp->data = arr[i];
		temp->next = NULL;

		mover->next = temp;
		mover = temp;
	}

	return head;
}

int print(struct node* head) {
	struct node* temp = head;
	while(temp != NULL) {
		printf("%d ", temp-> data);
		temp = temp->next;
	}
	printf("\n");
}

int cnt(struct node* head) {
	struct node* temp = head;
	int cnt = 0;
	while(temp != NULL) {
		cnt++;
		temp = temp->next;
	}
	return cnt;
}

struct node* insertAtEnd(struct node* head, int data) {
	struct node* temp = malloc(sizeof(struct node));
	struct node* current = head;

	temp->data = data;
	temp->next = NULL;

	while(current->next != NULL) {
		current = current->next;
	}

	current->next = temp;

	return head;
}

struct node* insertAtStart(struct node* head, int data) {
	struct node* temp = malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;

	temp->next = head;
	head = temp;

	return head;
}

struct node* insertAtk(struct node* head, int k, int data) {
	struct node* ptr = head;
	struct node* temp = malloc(sizeof(struct node));

	temp->data = data;
	temp->next = NULL;

	while(k != 2) { // why this logic give all alternatives any alt easy logic to remember
		ptr = ptr->next;
		k--;
	}

	temp->next = ptr->next;
	ptr->next = temp;

	return head;
}


struct node* deletefirst(struct node* head) {
	if(head == NULL) {
		printf("there is no element! ");
	}
	else {
		struct node* temp = head;

		head = head->next;
		free(temp);
		temp = NULL; // why do we do this
	}
	return head;
}

struct node* deletelast(struct node* head) {

	if(head == NULL ) return NULL;
	if(head->next == NULL) {
		free(head);
		head = NULL;
	}

	struct node* temp = head;
	struct node* prev = head;


	while(temp->next != NULL) {
		prev = temp;
		temp = temp->next;
	}

	prev->next = NULL;
	free(temp);
	temp = NULL; // why do we do this

	return head;
}


struct node* deletelast2(struct node* head) {
	struct node* temp = head;

	while(temp->next->next != NULL) {
		temp = temp->next;
	}

	free(temp->next);
	temp->next = NULL;
}


struct node* deletek(struct node* head, int k) {
	if(head == NULL) return NULL;

	struct node* prev = head;
	struct node* curr = head;

	if(k == 1) {
		head = curr->next;
		free(curr);
		curr=NULL;
	}
	else {
		while(k != 1) {
			prev = curr;
			curr = curr->next;
			k--;
		}

		prev->next = curr->next;
		free(curr);
		curr = NULL;
	}
	return head;
}

struct node* deleteall(struct node* head){
    
}

int main() {
	int arr[5] = {1, 3, 5, 2, 4};
	int n = sizeof(arr)/sizeof(arr[0]);

	struct node* head = convert(arr, n);

	// insertAtEnd(head, 15);

	// head = insertAtStart(head, 7); // call by value (&head, val)

	// insertAtk(head, 2, 2);

	// head = deletefirst(head); // call by value

	// deletelast(head);
    
    // deletek(head, 2);

	int count = cnt(head);

	printf("%d\n", count);

	print(head);

	printf("%d", head->data);
}