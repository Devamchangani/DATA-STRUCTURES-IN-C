// Write a program to implement Binary Search.


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

int binarysearch(int a[], int size, int element)
{
    int mid, low, high;
    low = 0;
    high = size-1;

    while (low <= high)
    {
        mid  = (low + high)/2;

        if(a[mid] == element)
        {
            return mid;
        }
        if(a[mid]< element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid -1;
        }
    }
    return -1;
    
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
    int n,element;

    printf("Enter a array size: ");
    scanf("%d", &n);

    printf("Enter a element of array: ");
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter a element : ");
    scanf("%d", &element);

    bubblesort(a,n);
    printarray(a,n);

    int searchindex = binarysearch(a,n,element);
    printf("The element %d was found at index %d \n", element, searchindex);
    
    return 0;
}