/* When the increment or decrement operator follows the variable, the operation is performed after its value has been obtained for
use in the expression */

#include <stdio.h>

int main(void)
{
    int i, j;

    i = 10;
    j = i++;

    /* this will print 11 10 */
    printf("i and j: %d %d", i, j);

    return 0;
}
