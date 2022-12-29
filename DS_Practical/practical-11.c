// Write a program to implement following operations on Circular Linked List.

// (a)   Insert a node at the end of the Linked List 
// (b)  Insert a node before specified position
// (c)   Delete a first node of the Linked List
// (d)  Delete a node after specified position


#include<stdio.h>
#include<stdlib.h>

//  Create a node

struct Node
{
    int data;
    struct Node* next;
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
        newNode -> next = head;
    }
    else
    {
        struct Node* p = head;
        struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
        while (p -> next != head)
        {
            p = p -> next;
        }
        p -> next = newNode;
        newNode -> data = data;
        newNode -> next = head;
        
    }
    return head;
    

}



struct Node* insert_before_node(struct Node* head, int data)
{
    int n,i =1;
    struct Node* p = head;

    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    
    printf("Enter The index : ");
    scanf("%d",&n);

    if( head == NULL)
    {
        struct Node* newNode;
        newNode =(struct Node*) malloc(sizeof(struct Node));
        head = newNode;
        newNode -> data = data;    
        newNode -> next = head;
    }
    else
    {
        if(n == 1)
        {
            
            newNode -> data = data;
            newNode -> next = head;
            while (p -> next != head)
            {
                p = p -> next;
            }
            p -> next = newNode;
            head = newNode;
            
        }
        else
        {
            
            while (i != n-1)
            {
                p = p -> next;
                i++;
            }
            
            newNode -> data = data;
            newNode -> next = p -> next;
            p -> next = newNode;
        }
         
        
    }
    return head;
    

}


struct Node* delete_at_first(struct Node* head)
{
    struct Node* p = head;
    struct Node* ptr = head;
    if(head == NULL)
    {
        printf("Empty");
    }
    else
    {
        if(p -> next == head)
        {
            printf("%d ", p -> data);
            free(p);
            head = NULL;
        }
        else
        {
            while (ptr -> next != head)
            {
                ptr = ptr -> next;
            }
            ptr -> next = p -> next;
            head = p -> next;
            printf("%d ", p -> data);
            free(p);
           
        }
        
    }
    return head;
}


struct Node* delete_after_node(struct Node* head)
{
    int n;
    int i = 0;

    printf("Enter The index : ");
    scanf("%d",&n);
    struct Node* p = head;
    struct Node* q = head;

    while (i != n)
    {
        p = p -> next;
        i++;
    }

    while (q -> next != p)
    {
        q = q -> next;
    }

    
    
    q -> next = p -> next;
    printf("Deleted element is :   %d ", p -> data);
    free(p);
    
    return head;
}

// Display Linkedlist 
void LinkedlistTravese(struct Node* head)
{
    if(head == NULL)
    {
        printf("Empty");
    }
    else
    {

    
        struct Node* ptr = head;
        do
        {
            printf("%d ", ptr -> data);
            ptr = ptr -> next;

        }while(ptr  != head);
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
        printf("2.insert_before_node\n");
        printf("3.delete_at_first\n");
        printf("4.delete_after_node\n");
        printf("5.Display\n");
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
                head = insert_before_node(head, n);
                break;
            case 3:
                head = delete_at_first(head);
                break;
            case 4:
                delete_after_node(head);
                break;
            case 5:
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
