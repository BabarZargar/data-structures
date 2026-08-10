#include <stdlib.h>
#include <stdio.h>

struct node{
    int data;
    struct node *link;
};

void count_of_nodes(struct node *head){
    int count = 0;
    if(head == NULL)
        printf("the list is empty");

    struct node *ptr = head;
    while(ptr != NULL){
        count++;
        ptr = ptr -> link;
    }
    printf("total nodes = %d\n", count);

}

void print_data(struct node *head){
    if(head == NULL)
        printf("the list is empty");

    struct node *ptr = head;
    while(ptr != NULL){
        printf("%d\n", ptr -> data);
        ptr = ptr -> link;
    }
}


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

    // counting the number of nodes by traversing the list
    count_of_nodes(head);
    // printing the data of each node by traversing
    print_data(head);

    return 0;
}