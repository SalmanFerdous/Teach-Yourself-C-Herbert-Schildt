/* This program displays the square of a number entered from the keyboard. The square is computed using the get_sqr() function. Its
operation should be clear. */

#include <stdio.h>

int get_sqr(void);

int main(void)
{
    int sqr;

    sqr = get_sqr();
    printf("Square: %d", sqr);

    return 0;
}

int get_sqr(void)
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    return num*num; /* square the number */
}
