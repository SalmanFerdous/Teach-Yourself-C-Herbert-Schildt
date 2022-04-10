/* This fragment prints the message "This is an example of a code block." if the user enters any positive number. */

#include <stdio.h>

int main()
{
    int num;

    scanf("%d", &num);

    if(num > 0){
        printf("This is ");
        printf("an example of ");
        printf("a code block.");
    }
}
