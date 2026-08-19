#include <stdlib.h>
#include <stdio.h>
#include "linkedlist.h"

int main(){
    struct node *head = malloc(sizeof(struct node));
    head -> data = 45;
    head -> link = NULL;

    struct node *ptr = head;
    add_at_end(ptr, 98);
    add_at_end(ptr, 35);
    add_at_end(ptr, 67);

    ptr = head;

    while(ptr != NULL)
    {
        printf("%d\n", ptr -> data);
        ptr = ptr -> link;
    }

    return 0;
}

