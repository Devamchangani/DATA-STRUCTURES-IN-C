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

// struct Node* insert_at_end(struct Node* head, int data)
// {
//     struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
//     struct Node* p = head;

//     while (p ->next !=NULL)
//     {
//         p = p->next;
        
//     }
//     ptr -> data = data;
//     p -> next = ptr;
//     ptr -> next = NULL;
//     return head;
    
// }




struct Node* newNode(int data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

void insertion_sort(struct Node** head, struct Node* newNode)//function to insert data in sorted position
{
	//If linked list is empty
	if (*head == NULL || (*head)->data >= newNode->data)
	{
		newNode->next = *head;
		*head = newNode;
		return;
	}

	//Locate the node before insertion
	struct Node* current = *head;
	while (current->next != NULL && current->next->data < newNode->data)
		current = current->next;

	newNode->next = current->next;
	current->next = newNode;
}



// delete at first
struct Node* delete_at_first(struct Node* head)
{
    struct Node* ptr = head;


    head = head -> next;
    free(ptr);

    return head;
}

// delete after spacific node
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




struct Node* delete_before_node(struct Node* head)
{
    int n;
    int i=1;
    struct Node* p = head;
    struct Node* q = head;

    printf("Enter The index : ");
    scanf("%d",&n);

    while (i != n-1)
    {
        p = p->next;
        i++;        
    }

    while (q -> next != p)
    {
        q = q->next;        
    }
    q -> next = p ->next;
    printf("Deleted element is :   %d ", p -> data);
    free(p);
    
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
        printf("1.insert\n");
        printf("2.insert_at_first\n");
        printf("3.insert_at_end\n");
        printf("4.insert_at_assending\n");
        printf("5.delete_at_first\n");
        printf("6.delete_after_node\n");
        printf("7.delete_before_node\n");
        printf("8.Display\n");
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
            case 4:
                printf("\nEnter data you want to insert: ");
                scanf("%d",&n);
                insertion_sort(&head, newNode(n));
                break;
            case 3:
                printf("enter element: ");
                scanf("%d",&n);
                // insert_at_end(head,n);
                head = insert_node(head,n);
                break;
            case 5:
                head = delete_at_first(head);
                break;
            case 6:
                delete_after_node(head);
                break;
            case 7:
                delete_before_node(head);
                break;
            case 8:
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

