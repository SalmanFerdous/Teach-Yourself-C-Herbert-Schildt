/* This program forms the basis for an addition drill. It displays two numbers and asks the user what the answer. The program then
tells the user if the answer is right or wrong. */

#include <stdio.h>

int main(void)
{
    int answer;

    printf("What is 10 + 14? ");
    scanf("%d", &answer);
    if(answer == 10+14) printf("Right!");

    return 0;
}
