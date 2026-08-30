#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node* prev;
    int data;
    struct node* next; 
};
struct node* addToEmpty(struct node* head, int data){
    struct node* temp = malloc(sizeof(struct node));
    temp -> prev = NULL;
    temp -> data = data;
    temp -> next = NULL;
    head = temp;
    return head;
}

struct node* addAtBeg(struct node* head, int data){
    struct node* temp = malloc(sizeof(struct node));
    temp -> prev = NULL;
    temp -> data = data;
    temp -> next = NULL;
    temp -> next = head;
    head -> prev = temp;
    head = temp;
    return head;
}

struct node* addAtEnd(struct node* head, int data){
    struct node* temp, *tp;
    temp = malloc(sizeof(struct node));
    temp -> prev = NULL;
    temp -> data = data;
    temp -> next = NULL;
    tp = head;
    while(tp -> next != NULL){
        tp = tp -> next;
    }
    tp -> next = temp;
    temp -> prev = tp;
    return head;
}

struct node* addAtPos(struct node* head, int data, int pos){
    struct node* temp = malloc(sizeof(struct node));
    struct node* temp1 = malloc(sizeof(struct node));
    struct node* temp2 = malloc(sizeof(struct node));

    temp1 = head;

    temp -> prev = NULL;
    temp -> data = data;
    temp -> next = NULL;

    while(pos != 1){
        temp1 = temp1 -> next;
        pos--;
    }

    if(temp1 -> next == NULL){
        temp1 -> next = temp;
        temp -> prev = temp1;
    }

    else{
        temp2 = temp1 -> next;
        temp1 -> next = temp;
        temp2 -> prev = temp;
        temp -> prev = temp1;
        temp -> next = temp2;
        return head;
    }
}


int main(){
    struct node* head = NULL;
    head = addToEmpty(head, 29);
    head = addAtBeg(head, 27);
    head = addAtEnd(head, 67);
    head = addAtPos(head, 69, 2);

    struct node* ptr = head;
    while(ptr != NULL){
        printf("%d\n", ptr -> data);
        ptr = ptr -> next;
    }

    return 0;
}