#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* insert_node(struct Node* head, int data)
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
        struct Node* p = head;
        struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
        while (p -> next != NULL)
        {
            p = p -> next;
        }
        p -> next = newNode;
        newNode -> data = data;
        newNode -> next = NULL;
        
    }
    return head;
    

};


//  Insert at the First

struct Node* insert_at_first(struct Node* head, int data)
{
     struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
     ptr -> next = head;
     ptr -> data = data;
     return ptr;
}

void LinkedlistTravese(struct Node* ptr)
{
    while (ptr != NULL)
    {
        printf("Element is : %d ", ptr -> data);
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
        printf("3.Display\n");
        
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