/* If the variable is preceded by the increment or decrement operator, the operation is performed first, and then the value of the
variable is obtained for use in the expression. */

#include <stdio.h>

int main(void)
{
    int i, j;

    i = 10;
    j = ++i;

    /* this will print 11 11 */
    printf("i and j: %d %d", i, j);

    return 0;
}
