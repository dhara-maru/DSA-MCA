#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
}struct node *head;

void display(struct node *p){
    while(p!= NULL){
        printf("%d -> ", p->data);
        p = p->next;
    }
}

void insert_at_beginning(int x){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = x;
    ptr -> next = head;
    head = ptr;
}

void insert_at_end(int x){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr -> data = x;
    
}