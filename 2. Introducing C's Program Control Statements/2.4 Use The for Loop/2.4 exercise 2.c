/* Write a program that prints the numbers between 17 to 100 that can be evenly divided by 17. */

#include <stdio.h>

int main(void)
{
    int i;

    for(i=17; i<101; i=i+1)
        if((i%17)==0) printf("%d ", i);

    return 0;
}
