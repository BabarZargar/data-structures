#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct node {
    int data;
    struct node *link;
};

void add_at_end(struct node *head, int data);

#endif