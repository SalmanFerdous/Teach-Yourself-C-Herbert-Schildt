/* This program is an improved version of the feet-to-meters, meters-to-feet conversion program. Notice how the use of code blocks
allows the program to prompt specifically for each unit. */

#include <stdio.h>

int main(void)
{
    float num;
    int choice;

    printf("1: Feet to Meters, 2: Meters to Feet. ");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("Enter number of feet: ");
        scanf("%f", &num);
        printf("Meters: %f", num / 3.28);
    }
    else {
        printf("Enter number of meters: ");
        scanf("%f", &num);
        printf("Feet: %f", num * 3.28);
    }

    return 0;
}
