#include <stdio.h>
#include <stdlib.H>
struct node{
    int data;
    struct node *link;
};
void traverse(struct node *ptr){
    while(ptr != NULL){
        printf("Element : %d\n", ptr->data);
        ptr = ptr -> link;
    }
}
void main(){
    struct node *first;
    struct node *second;
    struct node *third;

    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    first->data = 10;
    first->link = second;

    second->data = 20;
    second->link= third;

    third->data = 30;
    third->link= NULL;

    traverse(first);
}