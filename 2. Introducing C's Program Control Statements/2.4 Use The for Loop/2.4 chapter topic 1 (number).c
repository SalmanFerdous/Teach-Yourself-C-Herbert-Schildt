/* This program uses a for loop to print the numbers 1 through 10 on the screen. */

#include <stdio.h>

int main(void)
{
    int num;

    for(num=1; num<11; num=num+1) printf("%d ", num);
    printf("terminating");

    return 0;
}
