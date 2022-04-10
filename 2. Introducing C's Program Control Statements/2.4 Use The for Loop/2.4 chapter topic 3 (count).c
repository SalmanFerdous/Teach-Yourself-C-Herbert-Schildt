/* This program counts to 100 by fives: */

#include <stdio.h>

int main(void)
{
    int i;

    for(i=0; i<101; i=i+5) printf("%d ", i);

    return 0;
}
