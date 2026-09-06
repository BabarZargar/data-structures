#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* link;
};

struct node* add_at_beg(struct node* head, int data){
    struct node* current = malloc(sizeof(struct node));
    current -> data = data;
    current -> link = head;
    head = current;
    return head;
}

struct node* add_at_last(struct node* head, int data){
    struct node* ptr = head;
    while(ptr -> link != NULL)
        ptr = ptr -> link;
    struct node* new_node = malloc(sizeof(struct node));
    new_node -> data = data;
    new_node -> link = NULL;
    ptr -> link = new_node;
    return head;
}

void display(struct node* head){
    struct node* ptr = head;
    while(ptr != NULL){
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }
}
int main(){
    struct node* head = malloc(sizeof(struct node));
    head -> data = 27;
    head -> link = NULL;

    head = add_at_beg(head, 10);
    head = add_at_last(head, 29);
    display(head);
}