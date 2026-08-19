#include <stdlib.h>
#include <stdio.h>
#include "linkedlist.h"

int main(){
    struct node *head = malloc(sizeof(struct node));
    head -> data = 45;
    head -> link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current -> data = 98;
    current -> link = NULL;
    head -> link = current;

    current = malloc(sizeof(struct node));
    current -> data = 75;
    current -> link = NULL;
    head -> link -> link = current;

    add_at_end(head, 67);

    printf("%d", head -> link -> link -> link -> data);

    return 0;

}