/*   Practicl - 7
Single Linked List Operations. 

Write a menu driven program to implement following operations on Singly Linked List.

(a) Insert a node at the front of the Linked List +
(b) Insert a node at the end of the Linked List +
(c) Insert a node such that the Linked List is in ascending order (According to INFO field)
(d) Delete a first node of the Linked List +
(e) Delete a node before specified position 
(f) Delete a node after specified position
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


// Insert at the End

struct Node* insert_at_end(struct Node* head, int data)
{
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    struct Node* p = head;

    while (p ->next !=NULL)
    {
        p = p->next;
        
    }
    ptr -> data = data;
    p -> next = ptr;
    ptr -> next = NULL;
    return head;
    
}

// delete at first
struct Node* delete_at_first(struct Node* head)
{
    struct Node* ptr = head;


    head = head -> next;
    free(ptr);

    return head;
}

// // delete after spacific node
// struct Node* delete_after_node(struct Node* head ,struct Node* prevNode)
// {
//     struct Node* p = prevNode -> next;

//     prevNode -> next = p -> next;
//     free(p);
    
//     return head;
// }



// // delete before spacific node
// struct Node* delete_before_node(struct Node* head ,struct Node* prevNode)
// {
//     struct Node* p = head;
//     struct Node* q = head;
//     int i = 0;
//     int j = 0;
//     while (i != prevNode)
//     {
//         q = q -> next;
//         i++;
//     }

//     while (j != i)
//     {
//         p = p -> next;
//         j++;
//     }
    
    
//     p -> next = q -> next;
//     free(q);
    
//     return head;
// }


// Display Linkedlist 
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
        printf("3.insert_at_end\n");
        printf("4.delete_at_first\n");
        printf("5.delete_after_node\n");
        printf("6.delete_before_node\n");
        printf("7.Display\n");
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
                head = delete_at_first(head);
                break;
            case 5:
                // delete_after_node(head,);
                break;
            case 6:
                // delete_before_node(head);
                break;
            case 7:
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
