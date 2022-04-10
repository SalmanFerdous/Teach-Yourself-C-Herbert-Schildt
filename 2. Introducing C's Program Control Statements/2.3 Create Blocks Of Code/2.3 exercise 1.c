/* Write a program that either adds or subtracts two integers. First, prompt the user to choose an operation; then prompt for the
two numbers and display the result. */

#include <stdio.h>

int main(void)
{
    int a, b, op;

    printf("Enter 0 to add, 1 to subtract: ");
    scanf("%d", &op);

    if(op==0) { /* add */
        printf("Enter first number: ");
        scanf("%d", &a);
        printf("Enter second number: ");
        scanf("%d", &b);
        printf("%d", a+b);
    }
    else { /* subtract */
        printf("Enter first number: ");
        scanf("%d", &a);
        printf("Enter second number: ");
        scanf("%d", &b);
        printf("%d", a-b);
    }

    return 0;
}
