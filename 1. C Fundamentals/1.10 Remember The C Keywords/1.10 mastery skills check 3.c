/* There are 8 ounces in a cup. Write a program that converts ounces to cups. Use a function called o_to_c() to perform the
conversion. Call it with the number of ounces and have it return the number of cups. */

#include <stdio.h>

int o_to_c(int o);

int main(void)
{
    int ounces;
    int cups;

    printf("Enter ounces: ");
    scanf("%d", &ounces);

    cups = o_to_c(ounces);
    printf("%d cups", cups);

    return 0;
}

int o_to_c(int o)
{
    return o / 8;
}
