#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node *link;
};

struct node *start = NULL;

void insertion();
void traversal();
void del();


int main() {
    int c;

    while (1) {
        printf("1. Insertion\n");
        printf("2. Traversal\n");
        printf("3. Deletion\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &c);

        switch (c) {
            case 1:
                insertion();
                break;

            case 2:
                traversal();
                break;
            case 3:
                del();
                break;

            case 4:
                exit(0);
                break;

            default:
                printf("Wrong Choice!\n");
        }
    }

    return 0;
}

void insertion() {
    struct node *newnode, *ptr;
    int data;

    newnode = (struct node *)malloc(sizeof(struct node));

    if (newnode == NULL) {
        printf("Memory Allocation Failed!\n");
        return;
    }

    printf("Enter data: ");
    scanf("%d", &data);

    newnode->info = data;
    newnode->link = NULL;

    if (start == NULL) {
        start = newnode;
    } else {
        ptr = start;

        while (ptr->link != NULL) {
            ptr = ptr->link;
        }

        ptr->link = newnode;
    }

    printf("Node Inserted Successfully!\n");
}

void traversal() {
    struct node *ptr;

    if (start == NULL) {
        printf("List is Empty.\n");
        return;
    }

    ptr = start;

    printf("Linked List: ");

    while (ptr != NULL) {
        printf("%d\t", ptr->info);
        ptr = ptr->link;
    }

    printf("\n");
}
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