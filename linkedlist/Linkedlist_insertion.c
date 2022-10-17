#include<stdio.h>
#include<stdlib.h>

//  Create a node

struct Node
{
    int data;
    struct Node* next;
};


//  Insert at the First

struct Node* insert_at_first(struct Node* head, int data)
{
     struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
     ptr -> next = head;
     ptr -> data = data;
     return ptr;
}

// Insert at Between

struct Node* insert_at_between(struct Node* head, int data, int index)
{
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    struct Node* p = head;
    int i = 0;
    
    while (i!=index-1)
    {
        p = p-> next;
        i++;
    } 
    
    ptr -> data = data;
    ptr -> next = p -> next;
    p -> next = ptr;
    return head;
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

// Insert after apeccific node

struct Node* insert_after_node(struct Node* head ,struct Node* prevNode, int data)
{
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    
    ptr -> data = data;
    ptr -> next = prevNode -> next;
    prevNode -> next = ptr;
    
    return head;
}


// Display Linkedlist 

void LinkedlistTravese(struct Node* ptr)
{
    while (ptr != NULL)
    {
        printf("Element is : %d \n", ptr -> data);
        ptr = ptr -> next;
    }
    
}

int main(){

    struct Node* head;
    struct Node* second;
    struct Node* third;

    head = (struct  Node *) malloc(sizeof(struct Node));
    second = (struct  Node *) malloc(sizeof(struct Node));
    third = (struct  Node *) malloc(sizeof(struct Node));

// create node 3 node 
    
    head -> data = 7;
    head -> next = second;

    second -> data = 11;
    second -> next = third;

    third -> data = 17;
    third -> next = NULL;


//  display list

    LinkedlistTravese(head);
    printf("\n \n");
// insert at first element
    head = insert_at_first(head, 88);
    
// insert at the between
    insert_at_between(head,99,3);

// insert at the end
    insert_at_end(head, 1);

// insert at after node
    insert_after_node(head, second, 55);

    LinkedlistTravese(head);
     printf("\n \n");

//  after insert element
    LinkedlistTravese(head);

    return 0;
}
