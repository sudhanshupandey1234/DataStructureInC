#include<stdio.h>
#include<stdlib.h>

struct node {
    int info;
    struct node *link;
};
struct node *start;
void del()
{
    struct node *ptr;
    if (start==NULL)
    {
        printf("linked list is empty");
    }else
    {
        ptr=start;
        start = start->link;
        printf("%d is deleted",ptr->info);
    }
}
int main()
{
    del();     
    return 0;
}