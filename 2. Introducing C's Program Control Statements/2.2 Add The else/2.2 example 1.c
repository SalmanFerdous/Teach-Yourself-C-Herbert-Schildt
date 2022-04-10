/* In this program the else is used in place of a second if in the program from the preceding section, which determines whether a
number is negative or non-negative. */

#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if(num < 0) printf("Number is negative.");
    else printf("Number is non-negative.");

    return 0;
}
