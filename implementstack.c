#include<stdio.h>
#include<stdlib.h>

int top;
int stack[100];
int max = 5;
int data;
int main(){
    int choice;
    top = -1;
    while(1){
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Traverse\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                trav();
                break;
            case 4:
                exit(0);
            default:
                printf("Wrong Choice!\n");
        }
    }
    return 0;
}

void push(){
    printf("Enter the element to be pushed: ");
    scanf("%d",&data);
    if (top == max) {
        printf("Stack Overflow\n");
    } else {
        top++;
        stack[top] = data;
    }
}

void pop(){
    if (top == -1) {
        printf("Stack Underflow\n");
    } else {
        printf("Popped element: %d\n", stack[top]);
        top--;
    }
}

void trav(){
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements are: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}