#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
} *firstNode = NULL;


void display() {
    if (firstNode == NULL) {
        printf("List is Empty.\n");
        return;
    }
    struct node *temp = firstNode;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

void insert_End(int x) {
    if (firstNode == NULL) {
        firstNode = malloc(sizeof(struct node));
        if (firstNode == NULL) {
            printf("Memory allocation failed.\n");
            return;
        }
        firstNode->data = x;
        firstNode->link = NULL;
    } else {
        struct node *newNode = malloc(sizeof(struct node));
        if (newNode == NULL) {
            printf("Memory allocation failed.\n");
            return;
        }
        newNode->data = x;
        newNode->link = NULL;
        
        struct node *temp = firstNode;
        while (temp->link != NULL) {
            temp = temp->link;
        }
        temp->link = newNode;
    }
}


void delete_First() {
    if (firstNode == NULL) {
        printf("List is empty, nothing to delete.\n");
        return;
    }
    struct node *temp = firstNode;
    firstNode = firstNode->link;
    free(temp);
    printf("First node deleted.\n");
}



int main() {
    int choice;
    while (1) {
        printf("Enter your Choice\n1.Insert at End\n 2.Delete at beginning \n 3. Display \n 4. Exit \n");
        scanf("%d", &choice);

        switch (choice) {   
            case 1:
                {
                    int x;
                    printf("Enter the value to insert at the end: ");
                    scanf("%d", &x);
                    insert_End(x);
                    break;
                }
             case 2:
                delete_First();
                break;
           
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
