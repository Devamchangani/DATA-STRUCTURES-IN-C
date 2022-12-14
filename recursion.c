#include<stdio.h>
#include<stdlib.h>


int display(int n)
    {
        if(n != 0)
        {
            display(n-1);
            printf("%d\n",n);
            display(n-1);
            
        }
        
        
    }


int display2(int n)
    {
        if(n != 0)
        {
            display2(n-1);
            printf("%d\n",n);
            
            
        }
        
    }


    int display3(int n)
    {
        if(n != 0)
        {
            
            printf("%d\n",n);
            display3(n-1);
        }
        
    }
void main()
{
    int z;
    z = display(4);
    printf("================\n");
    z = display2(4);
    printf("================\n");
    z = display3(4);
}