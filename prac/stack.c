#include <stdio.h>
#define n 5
int stack[n];
int top = -1;
int i;


void push(int x){
    if(top >= n){
        printf("Stack Overflow");
    }
    else{
        top++;
        stack[top] = x;
    }
}

int pop(){
    if(top == -1){
        printf("stack underflow");
        return -1;
    }
    else{
        top--;
        return stack[top + 1];
    }
}

int peep(int i){
    if(top - i + 1 <= 0){
        printf("Stack underflow");
        return -1;
    }
    else{
        return stack[top-i +1];
    }
}

void display(){
    printf("Stack is as below : \n");
    if(top == -1){
        printf("stack underflow");
    }
    else{
        for(int i=top; i>= 0; i--){
            printf(stack[i]+"\n");
        }
    }
}

int change(int i, int x){

}
int main(){
    int choice, x, i;
    do{
        printf("----- Menu -----");
        printf("\n1.Push\n2.Pop\n3.Peep\n4.Change\n5.Display\n6.Exit\n\n");
        printf("Enter your choice here : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter a number to push : ");
                scanf("%d", &x);
                push(x);
                break;

            case 2:
                x = pop();
                if(x == -1){
                    printf("Stack Underflow");
                }else{
                    printf("Element Popped !");
                }
                break;
            case 3:
                printf("Enter I : ");
                scanf("%d", &i);
                x = peep(i);
                if (x == -1)
                {
                    printf("Ith Element is not available!\n");
                }
                else
                {
                    printf("%d is the %dth element\n", x);
                }
                break;
            case 4:
                printf("Enter i : ");
                scanf("%d", &i);
                printf("Enter x : ");
                scanf("%d", &x);
                change(i, x);
                break;
            case 5:
                display();
                break;
            case 6:
                return 0;
            default:
                printf("Enter valid choice!");
                break;
        }

    } while (choice != 6);

return 0;
}