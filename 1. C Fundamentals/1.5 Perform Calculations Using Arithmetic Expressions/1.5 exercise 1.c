/* Write a program that computes the volume of a cube. Have the program prompt the user for each dimension. */

#include <stdio.h>

int main(void)
{
    int len, width, height;

    printf("Enter length: ");
    scanf("%d", &len);

    printf("Enter width: ");
    scanf("%d", &width);

    printf("Enter height: ");
    scanf("%d", &height);

    printf("Volume is %d.", len * width * height);

    return 0;
}
