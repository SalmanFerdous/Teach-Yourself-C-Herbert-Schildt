#include <stdio.h>

int main(void)
{
    int a, b;

    a = 1;
    a++;
    b = a;
    b--;
    printf("%d %d", a, b); /* This will print 2 1 */

    return 0;
}
