/* A year on Jupiter (the time it takes for Jupiter to make one full circuit around the Sun) takes about 12 Earth years. The
following program allows you to convert Earth days, and it computes the equivalent number of Jovian years. Notice the use of
comments throughout the program. */

/* This program converts Earth days into Jovian years. */
#include <stdio.h>

int main(void)
{
    float e_days; /* number of Earth days */
    float j_years; /* equivalent number of Jovian years */

    /* get number of Earth days */
    printf("Enter number of Earth days: ");
    scanf("%f", &e_days);

    /* now, compute Jovian years */
    j_years = e_days / (365.0 * 12.0);

    /* display the answer */
    printf("Equivalent Jovian years: %f", j_years);

    return 0;
}
