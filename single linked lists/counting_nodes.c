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
    printf("total nodes = %d", count);

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

    printf("%d\n", head -> data);
    printf("%d\n", head -> link -> data);
    printf("%d\n", current -> data);

    // counting the number of nodes by travering the list
    count_of_nodes(head);

    return 0;
}