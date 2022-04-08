/* This program prints the square root of 10 */

#include <stdio.h>
#include <math.h> /* needed by sqrt() */

int main(void)
{
    double answer;

    answer = sqrt(10.0);
    printf("%f", answer);

    return 0;
}
