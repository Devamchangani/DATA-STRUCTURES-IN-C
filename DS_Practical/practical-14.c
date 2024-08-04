// Write a program to implement Quick Sort.

#include <stdio.h>

int partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (a[i] <= pivot)
        {
            i++;
        }

        while (a[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } while (i < j);

// swap a[low] and a[j]
    temp = a[low];
    a[low] = a[j];
    a[j] = temp;

    return j;
}

void quiksort(int a[], int low, int high)
{
    int partitionIndex; // index of pivot after partition

    if (low < high)
    {
        partitionIndex = partition(a, low, high);
        quiksort(a, low, partitionIndex - 1);  // sort left subarray
        quiksort(a, partitionIndex + 1, high); // sort right subarray
    }
}

void printarray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\n");
}
int main()
{
    int a[100];
    int n, d;

    printf("Enter a size of array: ");
    scanf("%d", &n);

    printf("Enter a size of element: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Unsorted array: \n");
    printarray(a, n);
    quiksort(a, 0, n - 1);
    printf("sorted array: \n");
    printarray(a, n);

    return 0;
}