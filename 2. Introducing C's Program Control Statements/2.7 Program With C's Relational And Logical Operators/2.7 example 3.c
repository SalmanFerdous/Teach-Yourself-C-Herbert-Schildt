/* C does not define an exclusive-OR (XOR) logical operator. The XOR operation produces a true result when one and only one operand
is true. The following program uses XOR function. It displays the result of an AND, OR, and XOR on the values you enter. */

#include <stdio.h>

int  xor(int a, int b);

int main(void)
{
    int p, q;

    printf("enter P (0 or 1): ");
    scanf("%d", &p);
    printf("enter Q (0 or 1): ");
    scanf("%d", &q);
    printf("P AND Q: %d\n", p && q);
    printf("P OR Q: %d\n", p || q);
    printf("P XOR Q: %d\n", xor(p, q));

    return 0;
}

int xor(int a, int b)
{
    return (a||b) && !(a && b);
}
