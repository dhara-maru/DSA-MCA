//Circular Linkedlist

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node *first, *last;

void cl_insertfirst(int x){
    struct node *newnode = malloc(sizeof(struct node));
    newnode -> data = x;
    if(first == NULL){
        first = newnode;
        last = newnode;
        newnode -> link = first;
    }else{
        newnode -> link = first;
        first = newnode;
        last -> link = newnode;
    }
}

void cl_insertlast(int x){
    struct node *newnode = malloc(sizeof(struct node));
    newnode -> data = x;
    if(first == NULL){
        first = newnode;
        last = newnode;
        newnode -> link = first;
    }else{
        newnode -> link = first;
        last -> link = newnode;
        last = newnode;
       
    } 
}


void display() {
    if (first == NULL) {
        printf("List is Empty.\n");
        return;
    }
    struct node *temp = first;
    while((temp->link) != first){
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}



int main() {
    int choice;
    while (1) {
        printf("Enter your Choice\n1.Insert at first\n2. Insert at last \n 3. Display \n 4. Exit \n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                {
                    int x;
                    printf("Enter the value to insert at the first: ");
                    scanf("%d", &x);
                    cl_insertfirst(x);
                    break;
                }
            case 2:
                {
                    int x;
                    printf("Enter the value to insert at the last: ");
                    scanf("%d", &x);
                    cl_insertlast(x);
                    break;
                }
            case 3:
                display();
                break;
            
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Enter a valid choice.\n");
                break;
        }
    }
}
