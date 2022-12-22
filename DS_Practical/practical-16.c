// Write a program to implement Bubble Sort

#include<stdio.h>

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

    printarray(a,n);

    return 0;
}