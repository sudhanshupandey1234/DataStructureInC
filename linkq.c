#include<stdio.h> 
#include<stdlib.h> 

struct Node{ 
    int data; 
    struct Node *next; 
}; 

struct Node *Front = NULL; 
struct Node *Rear = NULL; 
struct Node *temp; 

void Enqueue(){ 
    struct Node *newNode = NULL; 
    newNode = (struct Node*)malloc(sizeof(struct Node)); 
    if(newNode == NULL){ 
        printf("Queue is full\n"); 
        return; 
    } 
    else{ 
        int data; 
        printf("Enter the data: "); 
        scanf("%d", &data); 
        newNode->data = data; 
        newNode->next = NULL; 
        if(Front == NULL){ 
            Front = Rear = newNode; 
        } 
        else{ 
            Rear->next = newNode; 
            Rear = newNode; 
        } 
    } 
} 

void dequeue(){ 
    if(Front == NULL){ 
        printf("Queue is empty\n"); 
        return; 
    } 
    else{ 
        temp = Front; 
        Front = Front->next; 
    
        if(Front == NULL){
            Rear = NULL;
        }
        
        printf("Deleted element is %d\n", temp->data); 
        free(temp); 
    } 
} 

void traverse(){ 
    if(Front == NULL){ 
        printf("Queue is empty\n"); 
        return; 
    } 
    else{ 
        temp = Front; 
        printf("Queue elements are: "); 
        while(temp != NULL){ 
            printf("%d\t", temp->data); 
            temp = temp->next; 
        } 
        printf("\n"); 
    } 
} 

int main(){ 
    int choice; 
    while(1){ 
        printf("\n1. Enqueue\n"); 
        printf("2. Dequeue\n"); 
        printf("3. Traverse\n"); 
        printf("4. Exit\n"); 
        printf("Enter your choice: "); 
        scanf("%d", &choice); 
        switch(choice){ 
            case 1: 
                Enqueue(); 
                break; 
            case 2: 
                dequeue(); 
                break; 
            case 3: 
                traverse(); 
                break; 
            case 4: 
                exit(0); 
            default: 
                printf("Invalid choice!\n"); 
        } 
    } 
    return 0; 
}
