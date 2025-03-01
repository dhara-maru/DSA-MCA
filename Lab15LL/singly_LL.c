#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node *first = NULL;

void insert_begin(int x){
    if(first == NULL){
        first = (struct Node*)malloc(sizeof(struct Node));
        first->data = x;
        first->next = NULL;
    }else{
        struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
        new_node->data = x;
        new_node->next = first;
        first = new_node;
    }
}

void insert_end(int x){
    if(first == NULL){
        first = (struct Node*)malloc(sizeof(struct Node));
        first->data = x;
        first->next = NULL;
    }else{
        struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
        new_node->data = x;
        new_node->next = NULL;
        // first = new_node;

        if(first == NULL){
            first = new_node;
        }else{
            struct Node *temp = first;

            while (temp->next != NULL){
                temp = temp->next;
            }
            temp->next = new_node;
        }
    }
}

void display(){
    struct Node *temp;
    temp = first;

    if(first == NULL){
        printf("List is empty");
    }else{
        while(temp != NULL){
            printf("%d ",temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

int count_nodes(){
    int count = 0;
    struct Node *temp; 
    temp = first;

    while (temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

void main(){
    int ch;
    do{
        printf("\n1.Insert_at_first\n2.Insert_at_last\n3.Display\n4.Count Nodes\n5.Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);

        int x;

        switch (ch)
        {
        case 1 : printf("Enter the value you want to insert :");
                 scanf("%d",&x);
                 insert_begin(x);
            break;
        case 2 : printf("Enter the value you want to insert :");
                 scanf("%d",&x);
                 insert_end(x);
            break;
        case 3 : display();
            break;
        case 4 : printf("Total nodes in the list : %d\n",count_nodes());
            break;
        case 5 : printf("Exit");
                 return;
        default: printf("Invalid Choicee");
            break;
        }
    }while(ch != 5);
}