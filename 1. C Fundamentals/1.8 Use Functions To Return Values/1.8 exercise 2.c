/* Write a program that uses a function called convert(), which prompts the user for an amount in dollars and returns this value
converted into pounds. (Use an exchange rate of $2.00 per pound.) Display the conversion. */

#include <stdio.h>

int convert(void);

int main(void)
{
    printf("%d", convert());

    return 0;
}

int convert(void)
{
    int dollars;

    printf("Enter number of dollars: ");
    scanf("%d", &dollars);
    return dollars / 2;
}
