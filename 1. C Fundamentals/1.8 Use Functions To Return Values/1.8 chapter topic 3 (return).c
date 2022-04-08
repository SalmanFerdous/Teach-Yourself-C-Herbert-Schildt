/* This program prints 10 on the screen: */

#include <stdio.h>

int func(void); /* prototype */

int main(void)
{
    int num;

    num = func();
    printf("%d", num);

    return 0;
}

int func(void)
{
    return 10;
}
