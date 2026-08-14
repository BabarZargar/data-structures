#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

struct node* del_last(struct node *head){
    if(head == NULL){
        printf("list is already empty");
    }
    else if(head -> link == NULL){
        free(head);
        head = NULL;
    }
    else{
        struct node *temp = head;
        struct node *temp2 = head;
        while(temp->link != NULL){
            temp2 = temp;
            temp = temp -> link;
        }
        temp2 -> link = NULL;
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
    add_at_end(head, 98);
    add_at_end(head, 3);

    head = del_last(head);
    ptr = head;
    while(ptr != NULL){
        printf("%d\n", ptr -> data);
        ptr = ptr -> link;
    }
    return 0;

}