/* Write a program that contains at least two functions and prints the message The summer soldier, the sunshine patriot. */

#include <stdio.h>

void one(void);
void two(void);

int main(void)
{
    one();
    two();

    return 0;
}

void one(void)
{
    printf("The summer soldier, ");
}

void two(void)
{
    printf("the sunshine patriot.");
}
