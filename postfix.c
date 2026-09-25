#include <stdio.h>
#include <stdlib.h>

char post[20];
int stack[10];
int top = -1;
int i, a, b;
char c;
int result;

void push(int x);
int pop();

int main(){
    printf("enter the postfix expression: ");
    scanf("%s", post);

    for (i = 0; post[i] != '\0'; i++){
        c = post[i];

        if(c >= '0' && c <= '9'){
            push(c - '0');
        } else {
            b = pop();
            a = pop();
            
            switch(c){
                case '+':
                    result = a + b;
                    push(result);
                    break;
                case '-':
                    result = a - b;
                    push(result);
                    break;
                case '*':
                    result = a * b;
                    push(result);
                    break;
                case '/':
                    result = a / b;
                    push(result);
                    break;
            }  
        }
    }

    result = pop();
    printf("the result is: %d\n", result);
    return 0;
}

void push(int x){
    top++;
    stack[top] = x;
}

int pop(){
    int y;
    y = stack[top];
    top--;
    return y;
}