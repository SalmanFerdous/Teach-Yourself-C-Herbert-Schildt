/* This program prints 1 2 3 on the screen: */

/* This program has three functions. */

#include <stdio.h>

void func1(void); /* prototypes */
void func2(void);

int main(void)
{
    func2();
    printf("3");

    return 0;
}

void func2(void)
{
    func1();
    printf("2 ");
}

void func1(void)
{
    printf("1 ");
}
