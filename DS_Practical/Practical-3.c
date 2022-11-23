/*   Practicl - 3
Stack Operations. 

Implement a program for
stack that performs following operations using array:

(a) PUSH (b) POP (c) PEEP (d) CHANGE (e) DISPLAY
*/



#include<stdio.h>  
#include<stdlib.h>

void push(int a[], int *top, int size)
{
    if(*top == size-1)
        printf("\n Overflow \n");
    else
    {
        (*top)++;
        printf("Enter the Element \n");
        scanf("%d",&a[*top]);

    }
}

void pop(int a[], int *top)
{
    if(*top==-1)
    {
        printf("\n Empty \n");
    }
    else
    {
        
        printf("\n Delete Element is %d:", a[*top]);
        (*top)--;

    }
    top--;
}

void traverse(int a[], int top)
{
    int i;
    if(top == -1)
    {
        printf("\nEmpty\n");
    }
    else
    {
        for(i=top; i>=0; i--)
        {
            printf("%d\t",a[i]);
        }
    }
}

void peep(int a[],  int top) 
{
    int b;
    printf("Enter the index of Element \n");
    scanf("%d",&b);
    if (a[b] <= top)
    {
        printf("\n Not found");
    }
    else
    {
        printf("\n%d",a[b]);
    }

}

void change(int a[], int top ,int size)
{
    int c,b,i;
    printf("Enter the index of Element \n");
    scanf("%d",&b);
    printf("Enter the new  Element \n");
    scanf("%d",&c);
    if (a[b] <= top)
    {
        printf("\n Not found");
    }
    else
    {
        for(i=0;i<size;i++)
        {
            if(i==b)
            {
                a[i]=c;
            }
        }
        printf("Successfully Change element ");
    }

}


int main()
{
    int a[20],size,top,choice;
    char ch;
    top=-1;
    

    // clrscr();
    
    printf("\n\nEnter the size of stack: ");
    scanf("%d",&size);

    do{
        printf("******************  Main Menu  ******************\n");
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.Display\n");
        printf("4.peep\n");
        printf("5.Change\n");
        printf("0.exit\n");
        printf("Enter The Choice : ");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                push(a,&top,size);
                break;
            case 2:
                pop(a,&top);
                break;
            case 3:
                traverse(a,top);
                break;
            case 4:
                peep(a,top);
                break;
            case 5:
                change(a,top,size);
                break;
            case 0:
                exit(0);
            default:
                printf("\n Invalid choice \n");

        }

        printf("\n Do you wise to continue y or n: ");
        scanf("%s",&ch);
        // ch=getch();
    }while(ch == 'y' || ch == 'Y');
    
    
    return 0;
    


}
