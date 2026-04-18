#include <stdio.h>
#define MAX 10

struct element {
    int val;
    int p;
};

struct element pq[MAX];
int size = 0;

void insert(int val, int p){
    if(size == MAX){
        return;
    }
    pq[size].val = val;
    pq[size].p = p;
    size++;
}

int deleteMAX(){
    if(size == 0){
        printf("Priority Queue Empty\n");
        return 0;
    }
    int maxidx = 0;
    for(int i = 1; i < size; i++){
        if(pq[i].p >pq[maxidx].p){
            maxidx = i;
        }
    }
    int val = pq[maxidx].val;
    printf("removed element %d %d", pq[maxidx].val, pq[maxidx].p);

    pq[maxidx] = pq[size-1];
    size--;
    return val;
}


void display() {
    if (size == 0) { printf("Empty.\n"); return; }
    printf("Priority Queue:\n");
    for (int i = 0; i < size; i++) {
        printf("  [value=%d, priority=%d]\n",
               pq[i].val, pq[i].p);
    }
}

int main(){
    insert(101, 2);   
    insert(102, 5);   
    insert(103, 1);   
    insert(104, 4);   
    insert(105, 3);   

    printf("\nAll patients waiting:\n");
    display();

    printf("\nTreating patients by priority:\n");
    while (size > 0) {
        deleteMAX();
    }
    return 0;
}