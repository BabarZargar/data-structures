#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

struct node* del_end(struct node *head){
    if(head == NULL){
        printf("list is already empty");
    }
    else if(head -> link == NULL){
        free(head);
        head = NULL;
    }
    else{
        struct node *temp = head;
        while(temp -> link -> link != NULL){
            temp = temp -> link;
        }
        free(temp -> link -> link);
        temp -> link -> link = NULL;
        temp -> link = NULL;
    }
    return head;
}
int main(){
     struct node *head = malloc(sizeof(struct node));
    head -> data = 27;
    head -> link = NULL;

    struct node *ptr = head;
    add_at_end(head, 98);
    add_at_end(head, 3);

    head = del_end(head);
    ptr = head;

    while(ptr!=NULL){
        printf("%d\n", ptr -> data);
        ptr = ptr -> link;
    }
}