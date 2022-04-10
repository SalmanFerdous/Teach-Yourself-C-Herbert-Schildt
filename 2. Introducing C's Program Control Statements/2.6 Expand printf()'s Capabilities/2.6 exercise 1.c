/* Write a program that outputs a table of numbers. Each line in the table contains three entries; the number, its square, and its
cube. Begin with 1 and end with 10. Also, use a for loop to generate the numbers. */

#include <stdio.h>

int main(void)
{
    int i;

    for(i=1; i<11; i++)
        printf("%d %d %d\n", i, i*i, i*i*i);

    return 0;
}
