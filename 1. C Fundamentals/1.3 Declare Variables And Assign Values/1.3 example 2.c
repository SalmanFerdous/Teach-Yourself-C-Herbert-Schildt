/* This program creates variables of types char, float, and double; assigns each a value; and outputs these values to the screen. */

#include <stdio.h>

int main(void)
{
    char ch;
    float f;
    double d;

    ch = 'X';
    f = 100.123;
    d = 123.009;

    printf("ch is %c, ", ch);
    printf("f is %f, ", f);
    printf("d is %f ", d);

    return 0;
}
