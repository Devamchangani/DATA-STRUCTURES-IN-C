/*   Practicl - 2
Introduction to Dynamic Memory Allocation. 
Demonstrate malloc(), calloc() and free() DMA functions with some simple example.
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr, *ptr1;
    int n,i;

    printf("Enter a size of array : ");
    scanf("%d",&n);

// memory allocation
    ptr = (int*) malloc(n * sizeof(int));

// contiguous allocation
    ptr1 = (int*) calloc(n, sizeof(int));

    if(ptr == NULL || ptr1 == NULL)
    {
        printf("\nMemory not allocated\n");
        exit(0);
    }
    else
    {
// melloc

        printf("\nMemory allocated by malloc\n");

        free(ptr);
        printf("malloc Memory free \n");

// calloc

        printf("\nMemory allocated by calloc\n");

        free(ptr1);
        printf("calloc Memory free \n");
    }

}