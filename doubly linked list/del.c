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

struct node* delAtBeg(struct node* head){
    head = head -> next;
    free(head -> prev);
    head -> prev = NULL;
    return head;
}

struct node* delAtEnd(struct node* head){
    struct node* temp;
    struct node* temp1;

    temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp1 = temp -> prev;
    free(temp);
    temp = NULL;
    temp1 -> next = NULL;
    return head;
}

struct node* delAtPos(struct node* head, int pos){
    struct node* temp = head;
    struct node* temp1 = NULL;

    while(pos!=1){
        temp = temp -> next;
        pos--;
    }
    if(temp->next->next == NULL){
        head = delAtEnd(head);
    }
    else{
        temp1 = temp -> next -> next;
    free(temp->next);
    temp -> next = temp1;
    temp1 -> prev = temp;
    }
    
    return head;
}

int main(){
    struct node* head = NULL;
    head = addToEmpty(head, 29);
    head = addAtEnd(head, 27);
    head = addAtEnd(head, 67);
    head = addAtEnd(head, 69);

    head = delAtPos(head, 3);

    struct node* ptr = head;
    while(ptr != NULL){
        printf("%d\n", ptr -> data);
        ptr = ptr -> next;
    }

    return 0;
}
