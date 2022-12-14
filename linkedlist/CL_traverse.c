#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void LinkedlistTravese(struct Node* head)
{
    struct Node* ptr = head;

    do
    {
        printf("Element is : %d \n", ptr -> data);
        ptr = ptr -> next;
    }while((ptr != head));
    
}

int main(){

    struct Node* head;
    struct Node* second;
    struct Node* third;

    head = (struct  Node *) malloc(sizeof(struct Node));
    second = (struct  Node *) malloc(sizeof(struct Node));
    third = (struct  Node *) malloc(sizeof(struct Node));

    
    head -> data = 7;
    head -> next = second;

    second -> data = 11;
    second -> next = third;

    third -> data = 17;
    third -> next = head;

    LinkedlistTravese(head);

    return 0;
}
