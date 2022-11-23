/*Write a program to
implement stack using Linked List*/


#include<stdio.h>
#include<stdlib.h>

//  Create a node

struct Node
{
    int data;
    struct Node* next;
};

// insert node
struct Node* push(struct Node* head, int data)
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
        
        struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
        ptr -> next = head;
        ptr -> data = data;
        head =  ptr;
    }
    return head;
    

};

struct Node* pop(struct Node* head)
{
    struct Node* ptr = head;

    if(ptr == NULL)
    {
        printf("Empty");
    }
    else
    {    
        head = head -> next;
        printf(" pop Element is : %d ", ptr -> data);
        free(ptr);
    }

    return head;
}

void LinkedlistTravese(struct Node* ptr)
{
    if(ptr == NULL)
    {
        printf("Empty");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d ", ptr -> data);
            ptr = ptr -> next;
        }
    }
}

int main()
{
    int n,choice;
    char ch;
    struct Node* head = NULL;


    do{
        printf("******************  Main Menu  ******************\n");
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.display\n");
        printf("0.exit\n");
        
        printf("Enter The Choice : ");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                printf("enter element: ");
                scanf("%d",&n);
                head = push(head,n);
                break;
            case 2:
                head = pop(head);
                break;
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
