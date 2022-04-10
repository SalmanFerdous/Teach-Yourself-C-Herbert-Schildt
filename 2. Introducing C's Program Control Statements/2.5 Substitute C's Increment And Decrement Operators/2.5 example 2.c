/* This program illustrates the use of the increment and decrement operators: */

#include <stdio.h>

int main(void)
{
    int i;

    i = 0;

    i++;
    printf("%d ", i); /* prints 1 */
    i--;
    printf("%d ", i); /* prints 0 */

    return 0;
}
