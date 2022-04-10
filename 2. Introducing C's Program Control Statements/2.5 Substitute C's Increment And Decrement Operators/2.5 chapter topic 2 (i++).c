/* When the increment or decrement operator follows the variable, the operation is performed after its value has been obtained for
use in the expression */

#include <stdio.h>

int main(void)
{
    int count, max=1;

    count = 10 * max++;

    /* this will print 10 2 */
    printf("count and max: %d %d", count, max);

    return 0;
}
