/* A simple program that demonstrates sum(). */

#include <stdio.h>

void sum(int x, int y);

int main(void)
{
    sum(1, 20);
    sum(9, 6);
    sum(81, 9);

    return 0;
}

void sum(int x, int y)
{
    printf("%d ", x + y);
}
