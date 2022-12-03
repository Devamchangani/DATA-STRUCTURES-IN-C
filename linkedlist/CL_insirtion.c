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
     struct Node* p = head;

     ptr -> next = head;
     ptr -> data = data;
    //  ptr = head; 

    while (p ->next !=head)
    {
        p = p->next;
        
    }
     p -> next = ptr;
     return ptr;
}

// Insert at the End

struct Node* insert_at_end(struct Node* head, int data)
{
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    struct Node* p = head;

    while (p ->next !=head)
    {
        p = p->next;
        
    }
    ptr -> data = data;
    p -> next = ptr;
    ptr -> next = head;
    return head;
    
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

void LinkedlistTravese(struct Node* head )
{
    struct Node* ptr = head;
    do{
        printf("Element is : %d \n", ptr -> data);
        ptr = ptr -> next;
    }while(ptr != head);
    
    
}

int main(){

    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* forth;
    struct Node* fifth;
    struct Node* six;

    head = (struct  Node *) malloc(sizeof(struct Node));
    second = (struct  Node *) malloc(sizeof(struct Node));
    third = (struct  Node *) malloc(sizeof(struct Node));
    forth = (struct  Node *) malloc(sizeof(struct Node));
    fifth = (struct  Node *) malloc(sizeof(struct Node));
    six = (struct  Node *) malloc(sizeof(struct Node));
    
    head -> data = 7;
    head -> next = second;

    second -> data = 11;
    second -> next = third;

    third -> data = 17;
    third -> next = forth;

    forth -> data = 67;
    forth -> next = fifth;
    
    fifth -> data = 77;
    fifth -> next = six;
    
    six -> data = 97;
    six -> next = head;



//  display list

    LinkedlistTravese(head);
    printf("\n \n");

// insert at first element
    head = insert_at_first(head, 99);
    
// insert at the end
    insert_at_end(head, 100);

// insert at the between
    insert_at_between(head,999,6);

// insert at after node
    insert_after_node(head, forth, 888);


     printf("\n \n");
//  after insert element
    LinkedlistTravese(head);




    return 0;
}