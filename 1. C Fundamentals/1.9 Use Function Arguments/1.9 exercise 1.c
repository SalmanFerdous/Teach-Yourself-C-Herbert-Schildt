/* Write a program that uses a function called outnum() that takes one integer argument and displays it on the screen. */

#include <stdio.h>

void outnum(int num);

int main(void)
{
    outnum(10);

    return 0;
}

void outnum(int num)
{
    printf("%d", num);
}
