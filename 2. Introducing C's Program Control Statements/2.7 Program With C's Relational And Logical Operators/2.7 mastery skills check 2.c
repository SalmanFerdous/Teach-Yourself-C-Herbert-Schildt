/* Write a program that computes the square footage of a house given the dimensions of each room. Have the program ask the user how
many rooms are in the house and then request the dimensions of each room. Display the resulting total square footage. */

#include <stdio.h>

int main(void)
{
    int rooms, len, width, total;
    int i;

    printf("Number of rooms? ");
    scanf("%d", &rooms);

    total = 0;
    for(i=rooms; i>0; i--) {
        printf("Enter length: ");
        scanf("%d", &len);

        printf("Enter width: ");
        scanf("%d", &width);

        total = total + len * width;
    }
    printf("Total square footage: %d", total);

    return 0;
}
