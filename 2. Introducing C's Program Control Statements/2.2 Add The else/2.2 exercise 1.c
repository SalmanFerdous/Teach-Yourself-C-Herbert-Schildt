/* Write a program that requests two numbers and then displays either their sum or product, depending on what the user selects. */

#include <stdio.h>

int main(void)
{
    int a, b, op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter 0 to add, 1 to multiply: ");
    scanf("%d", &op);

    if(op==0) printf("%d", a+b);
    else printf("%d", a*b);

    return 0;
}
