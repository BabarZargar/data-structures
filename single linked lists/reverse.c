#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

struct node* reverse(struct node *head){
    struct node *prev = NULL;
    struct node *next = NULL;
    while(head != NULL){
        next = head -> link;
        head -> link = prev;
        prev = head;
        head = next;
    }
    head = prev;
    return head;
}
int main(){
    struct node *head = malloc(sizeof(struct node));
    head -> data = 27;
    head -> link = NULL;

    struct node *ptr = head;
    add_at_end(head, 29);
    add_at_end(head, 67);
    add_at_end(head, 69);
    
    head = reverse(head);
    ptr = head;
    while(ptr!=NULL){
        printf("%d\n", ptr -> data);
        ptr = ptr -> link;
    }
    return 0;
}