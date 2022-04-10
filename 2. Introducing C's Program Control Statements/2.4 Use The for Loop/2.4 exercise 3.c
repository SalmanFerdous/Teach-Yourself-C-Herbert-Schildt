/* Write a program similar to the prime number tester, except that it displays all the factors of a number entered by the user. For
example, if the user entered 8, it would respond with 2 and 4. */

#include <stdio.h>

int main(void)
{
    int num, i;

    printf("Enter the number to test: ");
    scanf("%d", &num);

    for(i=2; i<(num/2)+1; i=i+1)
        if((num%i)==0) printf("%d ", i);

    return 0;
}
