/* This program shows some uses of return statement */

#include <stdio.h>

func(void); /* prototype */

int main(void)
{
    int num;

    num = func();
    printf("%d", num);

    return;

    printf("This will not be printed");
}

func(void)
{
    printf("This will be printed ");

    return; /* This will return 21 because the above string has 21 characters */

    printf("This will not be printed");
}
