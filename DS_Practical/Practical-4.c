// Implement a program to convert infix notation to postfix notation using stack.


#include<stdio.h>
#include<ctype.h>

char stack[100];
int top = -1;

void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    if(top == -1)
    {
        return -1;
    }
    else
    {
        return stack[top-1];
    }
}

int priority(char x)
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    return 0;
}

int main()
{
    char exp[100];
    char *e, x;
    printf("Enter the expression : ");
    scanf("%s",exp);
    printf("\n");
    e = exp;
    
    while(*e != '\0')
    {
        if(isalnum(*e))
            printf("%c ",*e);
        else if(*e == '(')
            push(*e);
        else if(*e == ')')
        {
            while((x = pop()) != '(')
                printf("%c ", x);
        }
        else
        {
            while(priority(stack[top]) >= priority(*e))
                printf("%c ",pop());
            push(*e);
        }
        e++;
    }
    
    while(top != -1)
    {
        printf("%c ",pop());
    }return 0;
}


// =========================================================================================

// #include <stdio.h> 
// #include <string.h> 
// #include <stdlib.h> 
// #define MAX_SIZE 100 

// // Stack type 
// struct Stack 
// { 
//     int top; 
//     unsigned capacity; 
//     int* array; 
// }; 

// // Stack Operations 
// struct Stack* createStack( unsigned capacity ) 
// { 
//     struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack)); 
  
//     if (!stack) return NULL; 
  
//     stack->top = -1; 
//     stack->capacity = capacity; 
  
//     stack->array = (int*) malloc(stack->capacity * sizeof(int)); 
  
//     if (!stack->array) return NULL; 
  
//     return stack; 
// } 

// int isEmpty(struct Stack* stack) 
// { 
//     return stack->top == -1 ; 
// } 

// char peek(struct Stack* stack) 
// { 
//     return stack->array[stack->top]; 
// } 

// char pop(struct Stack* stack) 
// { 
//     if (!isEmpty(stack)) 
//         return stack->array[stack->top--] ; 
//     return '$'; 
// } 

// void push(struct Stack* stack, char op) 
// { 
//     stack->array[++stack->top] = op; 
// } 


// // A utility function to check if the given character is operand 
// int isOperand(char ch) 
// { 
//     return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'); 
// } 

// // A utility function to return precedence of a given operator 
// // Higher returned value means higher precedence 
// int Prec(char ch) 
// { 
//     switch (ch) 
//     { 
//     case '+': 
//     case '-': 
//         return 1; 
  
//     case '*': 
//     case '/': 
//         return 2; 
  
//     case '^': 
//         return 3; 
//     } 
//     return -1; 
// } 

// // The main function that converts given infix expression 
// // to postfix expression. 
// int infixToPostfix(char* exp) 
// { 
//     int i, k; 
  
//     // Create a stack of capacity equal to expression size 
//     struct Stack* stack = createStack(strlen(exp)); 
//     if(!stack) // See if stack was created successfully 
//         return -1 ; 
  
//     for (i = 0, k = -1; exp[i]; ++i) 
//     { 
//         // If the scanned character is an operand, add it to output. 
//         if (isOperand(exp[i])) 
//             exp[++k] = exp[i]; 
          
//         // If the scanned character is an ‘(‘, push it to the stack. 
//         else if (exp[i] == '(') 
//             push(stack, exp[i]); 
          
//         // If the scanned character is an ‘)’, pop and output from the stack  
//         // until an ‘(‘ is encountered. 
//         else if (exp[i] == ')') 
//         { 
//             while (!isEmpty(stack) && peek(stack) != '(') 
//                 exp[++k] = pop(stack); 
//             if (!isEmpty(stack) && peek(stack) != '(') 
//                 return -1; // invalid expression             
//             else
//                 pop(stack); 
//         } 
//         else // an operator is encountered 
//         { 
//             while (!isEmpty(stack) && Prec(exp[i]) <= Prec(peek(stack))) 
//                 exp[++k] = pop(stack); 
//             push(stack, exp[i]); 
//         } 
  
//     } 
  
//     // pop all the operators from the stack 
//     while (!isEmpty(stack)) 
//         exp[++k] = pop(stack ); 
  
//     exp[++k] = '\0'; 
//     printf( "%s\n", exp ); 
// } 

// // Driver program to test above functions 
// int main() 
// { 
     
//     char exp[100];
//     printf("Enter the expression : ");
//     scanf("%s",exp);
    
//     infixToPostfix(exp); 
//     return 0; 
// }