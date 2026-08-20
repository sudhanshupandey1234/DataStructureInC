// wap for creation of n number nodes in a linked list using single pointer in C.

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
void main(){
    int value;
struct node *head=NULL, *temp=NULL, *new;
int n, i;
printf("Enter the number of nodes: ");
scanf("%d", &n);
for(i=0;i<=n;i++){
    new = (struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d", &new->data);
    new->next = NULL;
    if(head == NULL){
        head = new;
        temp = head;
    }
    else{
        temp->next = new;
        temp = new;
    }
}

printf("The linked list is: ");
temp = head;
while(temp != NULL){
    printf("%d ", temp->data);
    temp = temp->next;
}
printf("\n");

printf("enter value to insert at specific position: ");
scanf("%d", &value);
printf("Enter the pos to insert : ");
int pos;
scanf("%d", &pos);
new = (struct node*)malloc(sizeof(struct node));
new->data = value;
new->next = NULL;
temp = head;
for(int i = 1; i < pos - 1; i++){
    temp = temp->next;
}
new->next = temp->next;
temp->next = new;

printf("The linked list after insertion at specific position is: ");
temp = head;
while(temp != NULL){
    printf("%d ", temp->data);
    temp = temp->next;
}
printf("\n");

}
