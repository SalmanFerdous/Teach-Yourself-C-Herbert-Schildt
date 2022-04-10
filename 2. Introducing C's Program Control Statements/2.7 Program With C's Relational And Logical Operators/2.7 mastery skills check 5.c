/* Write a program that prints the numbers 1 to 100 using 5 columns. Have each number separated from the next by a tab. */

#include <stdio.h>

int main(void)
{
    int i;

    for(i=1; i<=100; i++) {
        printf("%d\t", i);
        if((i%5)==0) printf("\n");
    }

    return 0;
}
