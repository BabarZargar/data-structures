#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

void add_at_end(struct node *head, int data) {
    struct node *ptr, *temp;

    ptr = head;
    temp = (struct node *)malloc(sizeof(struct node));

    temp->data = data;
    temp->link = NULL;

    while (ptr->link != NULL) {
        ptr = ptr->link;
    }

    ptr->link = temp;
}