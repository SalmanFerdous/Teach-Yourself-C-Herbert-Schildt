/* This program converts either feet to meters or meters to feet, depending upon what the user requests. */

#include <stdio.h>

int main(void)
{
    float num;
    int choice;

    printf("Enter value: ");
    scanf("%f", &num);

    printf("1: Feet to Meters, 2: Meters to Feet. ");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if(choice == 1) printf("%f", num / 3.28);
    if(choice == 2) printf("%f", num * 3.28);

    return 0;
}
