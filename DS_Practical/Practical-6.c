/*   Practicl - 6
Circular Queue Operations. 

Write a program to
implement Circular QUEUE using array that performs following operations :

(a) INSERT (b) DELETE (c) DISPLAY
*/

#include<stdio.h>
#include<stdlib.h>

// #include<conio.h>
void enqueue();
void dequeue();
void traverse();
int a[20],size,rear,choice,front,s;
char ch;

rear=-1;
front=-1;


// Insert a element in queue
void Enqueue(int a[], int *rear,int *front, int size)
{
    if(*rear==size-1)
        printf("Overflow");
    else
    {
        (*rear)++;
        printf("\nEnter the Element : ");
        scanf("%d",&a[*rear]);
    }
}

// Delete a element in queue
void Dqueue(int a[], int *rear, int *front)
{
    
    if(*front == *rear)
        printf("Empty");
        
    else
    {
        (*front)++;
        printf("\n%d",a[*front]);
        printf("\nDelete successfully");
        
        
    }


}

// Display queue
void traverse(int a[], int rear, int front)
{
    int i;
    if(rear == front)
    {
        printf("\nEmpty\n");
        
    }
    else 
    {
        for(i=front+1; i<=rear; i++)
        {
            printf("%d\t",a[i]);
        }
    }
}


int main()
{
    
    
    // clrscr();
    
    printf("\n\nEnter the size of queue: ");
    scanf("%d",&s);
    size = s;

    do{
        printf("******************  Main Menu  ******************\n");
        printf("1.Enqueue\n");
        printf("2.Dqueue\n");
        printf("3.Display\n");
        printf("0.exit\n");
        printf("Enter The Choice : ");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                Enqueue(a,&rear,&front,size);
                break;
            case 2:
                Dqueue(a,&rear,&front);
                // if(front == rear)
                //     size = size + 1;
                // else
                //     size = size + 1;
                break;
            case 3:
                traverse(a,rear,front);
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
    
    
    // getch();
    return 0;
    


}
