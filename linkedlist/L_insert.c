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

// #include<stdlib.h>
// #include<string.h>
// #include<stdio.h>
// struct Student
// {
//     int rollnumber;
//     char name[100];
//     char phone[100];
//     float percentage;
//     struct Student *next;
    
// }* head;
// void insert(int rollnumber, char *name, char* phone, float percentage)
// {
    
//     struct Student * student = (struct Student *) malloc(sizeof(struct Student));
//     student->rollnumber = rollnumber;
//     strcpy(student->name, name);
//     strcpy(student->phone, phone);
//     student->percentage = percentage;
//     student->next = NULL;
    
//     if(head==NULL){
//         // if head is NULL
//         // set student as the new head
//         head = student;
//     }
//     else{
//         // if list is not empty
//         // insert student in beginning of head
//         student->next = head;
//         head = student;
//     }
    
// }
// void search(int rollnumber)
// {
//     struct Student * temp = head;
//     while(temp!=NULL){
//         if(temp->rollnumber==rollnumber){
//             printf("Roll Number: %d\n", temp->rollnumber);
//             printf("Name: %s\n", temp->name);
//             printf("Phone: %s\n", temp->phone);
//             printf("Percentage: %0.4f\n", temp->percentage);
//             return;
//         }
//         temp = temp->next;
//     }
//     printf("Student with roll number %d is not found !!!\n", rollnumber);
// }
// void update(int rollnumber)
// {
    
//     struct Student * temp = head;
//     while(temp!=NULL){
        
//         if(temp->rollnumber==rollnumber){
//             printf("Record with roll number %d Found !!!\n", rollnumber);
//             printf("Enter new name: ");
//             scanf("%s", temp->name);
//             printf("Enter new phone number: ");
//             scanf("%s", temp->phone);
//             printf("Enter new percentage: ");
//             scanf("%f",&temp->percentage);
//             printf("Updation Successful!!!\n");
//             return;
//         }
//         temp = temp->next;
        
//     }
//     printf("Student with roll number %d is not found !!!\n", rollnumber);
    
// }
// void Delete(int rollnumber)
// {
//     struct Student * temp1 = head;
//     struct Student * temp2 = head; 
//     while(temp1!=NULL){
        
//         if(temp1->rollnumber==rollnumber){
            
//             printf("Record with roll number %d Found !!!\n", rollnumber);
            
//             if(temp1==temp2){
//                 // this condition will run if
//                 // the record that we need to delete is the first node
//                 // of the linked list
//                 head = head->next;
//                 free(temp1);
//             }
//             else{
//                 // temp1 is the node we need to delete
//                 // temp2 is the node previous to temp1
//                 temp2->next = temp1->next;
//                 free(temp1); 
//             }
            
//             printf("Record Successfully Deleted !!!\n");
//             return;
            
//         }
//         temp2 = temp1;
//         temp1 = temp1->next;
        
//     }
//     printf("Student with roll number %d is not found !!!\n", rollnumber);
    
// }
// void display()
// {
//     struct Student * temp = head;
//     while(temp!=NULL){
        
//         printf("Roll Number: %d\n", temp->rollnumber);
//         printf("Name: %s\n", temp->name);
//         printf("Phone: %s\n", temp->phone);
//         printf("Percentage: %0.4f\n\n", temp->percentage);
//         temp = temp->next;
        
//     }
// }
// int main()
// {
//     head = NULL;
//     int choice;
//     char name[100];
//     char phone[100];
//     int rollnumber;
//     float percentage;
//     printf("1 to insert student details\n2 to search for student details\n3 to delete student details\n4 to update student details\n5 to display all student details");
//     do
//     {
//         printf("\nEnter Choice: ");
//         scanf("%d", &choice);
//         switch (choice)
//         {
//             case 1:
//                 printf("Enter roll number: ");
//                 scanf("%d", &rollnumber);
//                 printf("Enter name: ");
//                 scanf("%s", name);
//                 printf("Enter phone number: ");
//                 scanf("%s", phone);
//                 printf("Enter percentage: ");
//                 scanf("%f", &percentage);
//                 insert(rollnumber, &name, phone, percentage);
//                 break;
//             case 2:
//                 printf("Enter roll number to search: ");
//                 scanf("%d", &rollnumber);
//                 search(rollnumber);
//                 break;
//             case 3:
//                 printf("Enter roll number to delete: ");
//                 scanf("%d", &rollnumber);
//                 Delete(rollnumber);
//                 break;
//             case 4:
//                 printf("Enter roll number to update: ");
//                 scanf("%d", &rollnumber);
//                 update(rollnumber);
//                 break;
//             case 5:
//                 display();
//                 break;
//         }
        
//     } while (choice != 0);
// }