#include<stdio.h>
#include<stdlib.h>

struct node {
    int info;
    struct node *next;
};
void main()
{
    struct node *head, *second, *third, *temp;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    head->info=10;
    head->next=second;
    second->info=20;
    second->next=third;
    third->info=30;
    third->next=NULL;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->info);
        temp=temp->next;
    }

}
