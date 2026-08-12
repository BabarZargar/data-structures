#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

void add_at_end(struct node *head, int data){
    struct node *ptr, *temp;
    ptr = head;
    temp = (struct node *)malloc(sizeof(struct node));

    temp -> data = data;
    temp -> link = NULL;

    while(ptr -> link != NULL){
        ptr = ptr -> link;
    }
    ptr -> link = temp;

}
void add_at_pos(struct node *head, int data, int pos){
    struct node *ptr = head;
    struct node *ptr2 = malloc(sizeof(struct node));

    ptr2 -> data = data;
    ptr2 -> link = NULL;

    pos--;
    while(pos!=1){
        ptr = ptr -> link;
        pos--;
    }
    ptr2 -> link = ptr-> link;
    ptr -> link = ptr2;
}

int main(){
    struct node *head = malloc(sizeof(struct node));
    head -> data = 27;
    head -> link = NULL;

    add_at_end(head, 29);
    add_at_end(head, 67);

    int data = 69, pos = 3;
    add_at_pos(head, data, pos);
    struct node *ptr = head;

    while(ptr!=NULL){
        printf("%d\n", ptr -> data);
        ptr = ptr -> link;
    }

    return 0;

}