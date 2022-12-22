// Write a program to implement Merge Sort


#include<stdio.h>

void merge(int a[], int mid, int low, int high)
{
    int i,j,k;
    int b[100];

    i = low, j = mid+1, k = low;

    while (i<= mid && j<= high )
    {
        if(a[i] < a[j])
        {
            b[k] = a[i];
            i++;
            k++;
        }
        else
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }

    while (i <= mid)
    {
        b[k] = a[i];
        i++;
        k++;
    }
    
    while (j <= high)
    {
        b[k] = a[j];
        j++;
        k++;
    }
    
    for(int i = 0; i<= high; i++)
    {
        a[i] = b[i];
    }
    
}

void mergesort(int a[],int low, int high)
{
    int mid;
    if(low<high)
    {
        mid = (low+high)/2;
        mergesort(a, low, mid);
        mergesort(a, mid+1, high);
        merge(a,mid,low,high);

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

    printf("Unsorted array: \n");
    printarray(a,n);
    mergesort(a,0,n-1);
    printf("Sorted array: \n");
    printarray(a,n);

    return 0;
}