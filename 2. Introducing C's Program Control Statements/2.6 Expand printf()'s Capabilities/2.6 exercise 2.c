/* Write a program that prompts the user for an integer value. Next, using a for loop, make it count down from this value to 0,
displaying each number on its own line. When it reaches 0; have it sound the bell. */

#include <stdio.h>

int main(void)
{
    int i, j;

    printf("Enter a number: ");
    scanf("%d", &i);

    for(j=i; j>0; j--) printf("%d\n",j);
    printf("\a");

    return 0;
}
