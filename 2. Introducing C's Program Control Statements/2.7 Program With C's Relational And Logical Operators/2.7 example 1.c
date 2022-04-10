/* This program shows some common and uncommon statements in professionally written C code. */

#include <stdio.h>

int main(void)
{
    int count;

    printf("Enter a zero or non-zero value: ");
    scanf("%d", &count);

    if(count != 0) printf("\nThis is true for any non-zero value\n"); /* Uncommon */
    if(count) printf("This is true for any non-zero value\n"); /* Common */

    if(count == 0) printf("\nThis is true for zero value\n"); /* Uncommon */
    if(!count) printf("This is true for zero value\n"); /* Common */

    return 0;
}
