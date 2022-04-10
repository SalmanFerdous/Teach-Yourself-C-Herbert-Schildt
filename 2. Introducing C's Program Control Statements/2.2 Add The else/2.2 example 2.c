/* This program prompts the user for two numbers divides the first by the second, and displays the result. However, division by zero
is undefined, so the program uses an if and an else statement to prevent division by zero from occurring. */

#include <stdio.h>

int main(void)
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    if(num2 == 0) printf("Cannot divide by zero.");
    else printf("Answer is: %d.", num1 / num2);

    return 0;
}
