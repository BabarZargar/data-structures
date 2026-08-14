#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

struct node* del_first(struct node *head){
    if(head == NULL){
        printf("list is already empty");
    }
    else{
        struct node *temp = head;
        head = head -> link;
        free(temp);
        temp = NULL;
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

    head = del_first(head);
    ptr = head;
    while(ptr!=NULL){
        printf("%d\n", ptr -> data);
        ptr = ptr -> link;
    }
    return 0;
}
