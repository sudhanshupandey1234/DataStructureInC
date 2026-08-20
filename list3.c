#include<stdio.h>
#include<stdlib.h>

struct node {
    int info;
    struct node *link;
};

struct node *start = NULL;
int c, data;

void insertLast();
void deleteLast();
void traverse();
void insertFirst();

int main()
{
    while(1)
    {
        printf("\n1. Insert\n2. Delete\n3. Display\n4. Insert at beginning\n5. Delete at beginning\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&c);

        switch(c)
        {
            case 1:
                insertLast();
                break;

            case 2:
                deleteLast();
                break;

            case 3:
                traverse();
                break;
            
            case 4:
                insertFirst();
                break;

            case 5:
                deleteFirst();
                break;    

            case 6:
                traverse();
                break;

            case 7:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }
}

void insertLast()
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    printf("Enter data: ");
    scanf("%d",&data);

    newnode->info = data;
    newnode->link = NULL;

    if(start == NULL)
    {
        start = newnode;
    }
    else
    {
        struct node *temp = start;
        while(temp->link != NULL)
        {
            temp = temp->link;
        }
        temp->link = newnode;
    }
}

void deleteLast()
{
    struct node *ptr, *prev;

    if(start == NULL)
    {
        printf("List is empty\n");
        return;
    }

    if(start->link == NULL)
    {
        printf("%d deleted\n", start->info);
        free(start);
        start = NULL;
        return;
    }

    ptr = start;
    prev = NULL;

    while(ptr->link != NULL)
    {
        prev = ptr;
        ptr = ptr->link;
    }

    prev->link = NULL;
    printf("%d deleted\n", ptr->info);
    free(ptr);
}

void traverse()
{
    if(start == NULL)
    {
        printf("List is empty\n");
        return;
    }

    struct node *ptr = start;
    while(ptr != NULL)
    {
        printf("%d -> ", ptr->info);
        ptr = ptr->link;
    }
    printf("NULL\n");
}
void insertFirst()
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    printf("Enter data: ");
    scanf("%d",&data);

    newnode->info = data;
    newnode->link = start;
    start = newnode;
}
void deleteFirst()
{
    if(start == NULL)
    {
        printf("List is empty\n");
        return;
    }

    struct node *ptr = start;
    start = start->link;
    printf("%d deleted\n", ptr->info);
    free(ptr);
}


