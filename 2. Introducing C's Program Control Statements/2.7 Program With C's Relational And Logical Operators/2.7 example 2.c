/* The following program requests two integers, then displays the outcome of each relational and logical operation when applied to
them. In all cases, the result will be a 0 or a 1. */

#include <stdio.h>

int main(void)
{
    int i, j;

    printf("Enter first number: ");
    scanf("%d", &i);
    printf("Enter second number: ");
    scanf("%d", &j);

    /* relational operations */
    printf("i < j %d\n", i < j);
    printf("i <= j %d\n", i <= j);
    printf("i == j %d\n", i == j);
    printf("i > j %d\n", i > j);
    printf("i >= j %d\n", i >= j);

    /* logical operations */
    printf("i && j %d\n", i && j);
    printf("i || j %d\n", i || j);
    printf("!i !j %d %d\n", !i, !j);

    return 0;
}
