/* The program shown here illustrates the three new concepts introduced in this section. First, it declares a variable named num.
Second, it assigns this variable the value 100. Finally, it uses printf() to display The value is 100 on the screen. Examine this
program closely: */

#include <stdio.h>

int main(void)
{
    int num;

    num = 100;
    printf("The value is %d", num);

    return 0;
}
