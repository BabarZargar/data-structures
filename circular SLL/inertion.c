#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* link;
};

struct node* newList(int data){
    struct node* temp = malloc(sizeof(struct node));
    temp -> data = data;
    temp -> link = temp;
    return temp;
}

struct node* addAtBeg(struct node* tail, int data){
    struct node* temp = malloc(sizeof(struct node));
    temp -> data = data;
    temp -> link = tail -> link;
    tail -> link = temp;
    return tail;
}

struct node* addAtEnd(struct node* tail, int data){
    struct node* temp = malloc(sizeof(struct node));
    temp -> data = data;
    temp -> link = tail -> link;
    tail -> link = temp;
    tail = temp;
    return tail;
}

struct node* delPos(struct node* tail, int pos){
    struct node* temp = tail -> link;
    if(pos==1){
        tail -> link  = temp -> link;
        free(temp);
        temp = NULL;
    }
    else{
        while(pos>2){
            temp = temp -> link;
            pos--;
        }

        struct node* ptr = temp -> link;
        temp -> link = ptr -> link;
        if(ptr == tail){
            tail = temp;
        }
        free(ptr);
        ptr = NULL;
    }

    return tail;
}

struct node* createList(struct node* tail){
    tail = newList(27);
    tail = addAtBeg(tail, 29);
    tail = addAtEnd(tail, 67);
    tail = addAtEnd(tail, 10);
    tail = addAtEnd(tail, 17);
    tail = addAtEnd(tail, 69);
    tail = delPos(tail, 2);
    return tail;
}

void print(struct node* tail){
    struct node* temp = tail->link;
    do
    {
        printf("%d\n", temp -> data);
        temp = temp -> link;
    } while (temp != tail->link);
    
}

int main(){
    struct node* tail = NULL;
    tail = createList(tail);
    print(tail);
    return 0;
}