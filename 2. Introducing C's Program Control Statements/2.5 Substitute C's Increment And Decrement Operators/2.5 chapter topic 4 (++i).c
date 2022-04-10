/* If the variable is preceded by the increment or decrement operator, the operation is performed first, and then the value of the
variable is obtained for use in the expression. */

#include <stdio.h>

int main(void)
{
    int count, max=1;

    count = 10 * ++max;

    /* this will print 20 2 */
    printf("count and max: %d %d", count, max);

    return 0;
}

