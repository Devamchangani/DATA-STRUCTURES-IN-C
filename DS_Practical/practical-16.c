// Write a program to implement Bubble Sort

#include<stdio.h>

void bubblesort(int a[], int n)
{
    int temp;
    for(int i = 0; i<n-1; i++)
    {
        for(int j = 0; j < n-1-i; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
        
    }
}


void printarray(int a[], int n)
{
    for(int i = 0; i<n; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\n");
}


int main()
{
    int a[100];
    int n;

    printf("Enter a array size: ");
    scanf("%d", &n);

    printf("Enter a element of array: ");
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Unsorted array: ");
    printarray(a,n);
    bubblesort(a,n);
    printf("Sorted array: ");
    printarray(a,n);

    return 0;
}