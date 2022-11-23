/*
Write a program to implement following operations on Doubly Linked List.

(a) Insert a node at the front of the Linked List
(b) Insert a node at the end of the Linked List
(c) Delete a last node of the Linked List
(d) Delete a node before specified position*/

#include<stdio.h>
#include<stdlib.h>

//  Create a node

struct Node
{
    int data;
    struct Node* next;
    struct Node* back;
};

// insert node
struct Node* insert_node(struct Node* head, int data)
{
    if( head == NULL)
    {
        struct Node* newNode;
        newNode =(struct Node*) malloc(sizeof(struct Node));
        head = newNode;
        newNode -> data = data;    
        newNode -> next = NULL;
        newNode -> back = NULL;
    }
    else
    {
        struct Node* p = head;
        struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
        while (p -> next != NULL)
        {
            p = p -> next;
        }
        p -> next = newNode;
        newNode -> data = data;
        newNode -> back = p;
        newNode -> next = NULL;
    }
    return head;
};

//  Insert at the First

struct Node* insert_at_first(struct Node* head, int data)
{
     struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
     ptr -> next = head;
     ptr -> back = NULL;
     head -> back = ptr;
     ptr -> data = data;
     return ptr;
}


// Insert at the End
struct Node* insert_at_end(struct Node* head, int data)
{
    // insert_node(head,data);

    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    struct Node* p = head;

    while (p ->next !=NULL)
    {
        p = p->next;
        
    }
    ptr -> data = data;
    ptr -> back = p;
    p -> next = ptr;
    ptr -> next = NULL;
    return head;
    
}

struct Node* delete_at_end(struct Node* head)
{
    
    struct Node* p = head;

    while (p ->next !=NULL)
    {
        p = p->next;
        
    }
    p -> back -> next = NULL;
    printf("Deleted element is :   %d ", p -> data);
    free(p);
    
}


struct Node* delete_before_position(struct Node* head)
{
    int n;
    int i=1;
    struct Node* p = head;
    // struct Node* q = head;

    printf("Enter The index : ");
    scanf("%d",&n);

    while (i != n-1)
    {
        p = p->next;
        i++;        
    }

    // while (q -> next != p)
    // {
    //     q = q->next;        
    // }

    // q -> next = p -> next;
    // p -> next -> back = p -> back;

    p -> back -> next = p -> next;
    p -> next -> back = p -> back;

    printf("Deleted element is :   %d ", p -> data);
    free(p);
    
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
        printf("1.insert\n");
        printf("2.insert_at_first\n");
        printf("3.insert_at_end\n");
        printf("4.delete_at_end\n");
        printf("5.delete_before_position\n");
        printf("6.Display\n");
        printf("0.exit\n");
        
        printf("Enter The Choice : ");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                printf("enter element: ");
                scanf("%d",&n);
                head = insert_node(head,n);
                break;
            case 2:
                printf("enter element: ");
                scanf("%d",&n);
                head = insert_at_first(head, n);
                break;
            case 3:
                printf("enter element: ");
                scanf("%d",&n);
                insert_at_end(head,n);
                break;
            case 4:
                delete_at_end(head);
                break;
            case 5:
                delete_before_position(head);
                break;
            case 6:
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
