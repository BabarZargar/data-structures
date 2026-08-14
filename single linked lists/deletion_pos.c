#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

struct node* del_pos(struct node **head, int position){
    struct node *previous = *head;
    struct node *current = *head;
    if(*head == NULL){
        printf("list is already empty");
    }
    else if(position == 1){
        *head = current->link;
        free(current);
        current = NULL;
    }
    else{
        while(position != 1){
            previous = current;
            current = current -> link;
            position--;
        }
        previous->link = current->link;
        free(current);
        current = NULL;
    }
    return *head;
}
int main(){
    struct node *head = malloc(sizeof(struct node));
    head -> data = 27;
    head -> link = NULL;

    struct node *ptr = head;
    add_at_end(head, 29);
    add_at_end(head, 67);

    int position = 2;
    head = del_pos(&head, position);
    ptr = head;
    while(ptr != NULL){
        printf("%d\n", ptr -> data);
        ptr = ptr -> link;
    }
    return 0;
}