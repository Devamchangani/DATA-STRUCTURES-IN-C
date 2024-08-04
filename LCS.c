#include <stdio.h>
#include <conio.h>

void main(){
    // clrscr();
    int a,b,i,m=1;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    // while (a>1 || b>1)
    // {
    //    if (a % i == 0 || b % i == 0){
    //         if(a%i == 0){
    //             a = a/i;
    //         } 
    //         if(b%i == 0){
    //             b = b/i;
    //         }
    //         m = m*i;
    //    }
    //    i++;
    // }

    i = (a>b) ?a:b;
    while(m){
        if (i%a == 0 && i %b == 0){
            printf("%d",i);
            break;
        }
        ++i;
    }
    // printf("%d",m);
    getch();

}