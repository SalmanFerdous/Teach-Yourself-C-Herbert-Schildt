/* This program asks you to input an integer and a floating-point number. It then displays the values you enter. */

#include <stdio.h>

int main(void)
{
    int num;
    float f;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter a floating point number: ");
    scanf("%f", &f);

    printf("%d ", num);
    printf("%f ", f);

    return 0;
}
