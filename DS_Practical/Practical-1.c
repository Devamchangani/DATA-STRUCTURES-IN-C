/*   Practicl - 1
Introduction to pointer. Write a C program to calculate average of three integer number using Call by value
and Call by reference concepts.
*/

#include<stdio.h>
#include<stdlib.h>

// Passing value
int call_by_value(int a, int b, int c)
{
    return (a+b+c)/3;
}

// passing address
int call_by_refrence(int *a, int*b, int*c)
{
    return(*a+*b+*c)/3;
}

int main()
{
    int a,b,c;
    printf("Enter a value of a, b and c :\n");
    scanf("%d %d %d",&a,&b,&c);

    int Call_By_value = call_by_value(a,b,c);
    int Call_By_Refrence = call_by_refrence(&a,&b,&c);

    printf("\n\nAvrage with Call_by_value :%d", Call_By_value);
    printf("\n\nAvrage with Call_by_Rafrence :%d", Call_By_Refrence);

    return 0;

}