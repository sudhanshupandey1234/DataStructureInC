#include<stdio.h>
#include<stdlib.h>

struct node {
    int info;
    struct node *next;
};

void main(){
    struct node *head, *second, *third, *temp;
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    head->info = 1;
    head->next = second;
    second->info = 2;
    second->next = third;
    third->info = 3;
    third->next = NULL;
    temp = head;
    printf("The linked list after insertion is: ");
    while(temp != NULL){
        printf("%d ", temp->info);
        temp = temp->next;
    }
    printf("\n");
}
