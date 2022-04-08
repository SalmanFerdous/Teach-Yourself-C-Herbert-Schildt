/* The moon's gravity is about 17 percent of Earth's. Write a program that allows you to enter your weight and computes your
effective weight on the moon. */

#include <stdio.h>

int main(void)
{
    float weight;

    printf("Enter your weight: ");
    scanf("%f", &weight);
    printf("Effective moon weight: %f", weight * 0.17);

    return 0;
}
