/* This program computes the area of a rectangle, given its dimensions. It first prompts the user for the length and width of the
rectangle and then displays the area. */

#include <stdio.h>

int main(void)
{
    int len, width;

    printf("Enter length: ");
    scanf("%d", &len);
    printf("Enter width: ");
    scanf("%d", &width);

    printf("Area is %d", len * width);

    return 0;
}
