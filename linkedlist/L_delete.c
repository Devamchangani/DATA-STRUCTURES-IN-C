#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};


struct Node* delete_at_first(struct Node* head)
{
    struct Node* ptr = head;


    head = head -> next;
    free(ptr);

    return head;
}



struct Node* delete_at_end(struct Node* head)
{
    
    struct Node* p = head;
    struct Node* q = head;
   

    while (q ->next != NULL)
    {
        q = q->next;
        
    }

    while (p -> next != q)
    {
        p = p -> next;
    }

    p -> next = NULL;
    free(q);
    
    

    return head;
    
}


struct Node* delete_at_between(struct Node* head, int index)
{
    
    struct Node* p = head;
    struct Node* q = head;
    int i = 0;
    int j = 0;

    while (j!=index)
    {
        q = q -> next;
        j++;
    }

    while (i!=index-1)
    {
        p = p-> next;
        i++;
    } 
    
    p  -> next = q -> next;
    free(q);

    return head;
}


struct Node* delete_after_node(struct Node* head ,struct Node* prevNode)
{
    struct Node* p = prevNode -> next;

    prevNode -> next = p -> next;
    free(p);
    
    return head;
}

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
    six -> next = NULL;


    LinkedlistTravese(head);

    printf("\n delete first\n");

    head = delete_at_first(head);
    LinkedlistTravese(head);

    printf("\n Delete between \n");

    delete_at_between(head, 2);
    LinkedlistTravese(head);

    printf("\n delete end\n");

    delete_at_end(head);
    LinkedlistTravese(head);

    
    printf("\ndelete after node\n");
    
    delete_after_node(head, second);
    LinkedlistTravese(head);

    return 0;
}
