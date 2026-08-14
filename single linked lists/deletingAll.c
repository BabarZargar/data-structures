#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

struct node* del_all(struct node *head){
    if(head==NULL){
        printf("list is already empty");
    }
    else{
        struct node *temp = head;
        while(temp != NULL){
            temp = temp -> link;
            free(head);
            head = temp;
        }
    }
    return head;
}
int main(){
    struct node *head = malloc(sizeof(struct node));
    head -> data = 27;
    head -> link = NULL;

    struct node *ptr = head;
    add_at_end(head, 29);
    add_at_end(head, 67);

    head = del_all(head);
    if(head == NULL)
        printf("linked list deleted succesfully");
    return 0;
}