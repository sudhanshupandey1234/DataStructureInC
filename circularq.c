#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int queue[SIZE];
int front = -1;
int rear = -1;
int data;

int main(){
    int choice;
    while(1){
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Traverse\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                trav();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}

void enqueue(){
    if((rear + 1) % SIZE == front){
        printf("Queue is full!\n");
        return;
    }else{
        printf("Enter the data to be inserted: ");
        scanf("%d", &data);
        if(front == -1){
            front = 0;
            rear = 0;
        }
        else{
            rear = (rear + 1) % SIZE;
            queue[rear] = data;
        }
    }   
}
void dequeue(){
    if(front == -1){
        printf("Queue is empty!\n");
        return;
    }else{
        printf("The deleted data is: %d\n", queue[front]);
        if(front == rear){
            front = -1;
            rear = -1;
        }else{
            front = (front + 1) % SIZE;
        }
    }
}
void trav(){

    if(front == -1){
        printf("Queue is empty!\n");
        return;
    }else{
        int i = front;
        printf("The elements in the queue are: ");
        while(i != rear){
            printf("%d ", queue[i]);
            i = (i + 1) % SIZE;
        }
        printf("%d\n", queue[rear]);
    }
}

