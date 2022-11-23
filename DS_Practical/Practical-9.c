/*
Write a program to implement QUEUE using Linked List.
*/


#include<stdio.h>
#include<stdlib.h>

//  Create a node

struct Node
{
    int data;
    struct Node* next;
};


// insert node
struct Node* enqueue(struct Node* head, int data)
{
    if( head == NULL)
    {
        struct Node* newNode;
        newNode =(struct Node*) malloc(sizeof(struct Node));
        head = newNode;
        newNode -> data = data;    
        newNode -> next = NULL;
    }
    else
    {
        struct Node* rear;
        struct Node* p = head;
        struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
        while (p -> next != NULL)
        {
            p = p -> next;
        }
        p -> next = newNode;
        newNode -> data = data;
        newNode -> next = NULL;
        rear = newNode;
        
    }
    return head;
    
};


struct Node* dequeue(struct Node* head)
{
    struct Node* ptr = head;

    if(ptr == NULL)
    {
        printf("Empty");
    }
    else
    {    
        head = head -> next;
        // printf(" pop Element is : %d ", ptr -> data);
        free(ptr);
    }

    return head;
}


// Display Linkedlist 
void LinkedlistTravese(struct Node* ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr -> data);
        ptr = ptr -> next;
    }
    
}

int main()
{
    int n,choice;
    char ch;
    struct Node* head = NULL;


    do{
        printf("******************  Main Menu  ******************\n");
        printf("1.enqueue\n");
        printf("2.dequeue\n");
        printf("3.Display\n");
        printf("0.exit\n");
        
        printf("Enter The Choice : ");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                printf("enter element: ");
                scanf("%d",&n);
                head = enqueue(head,n);
                break;
            case 2:
                head = dequeue(head);
            case 3:
                LinkedlistTravese(head);
                break;
            case 0:
                exit(0);
            default:
                printf("\n Invalid choice \n");

        }

        printf("\n Do you wise to countinue y or n: ");
        scanf("%s",&ch);
        // ch=getch();
    }while(ch == 'y' || ch == 'Y');

 
    
    return 0;
}
