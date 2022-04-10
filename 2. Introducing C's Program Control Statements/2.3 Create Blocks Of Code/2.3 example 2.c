/* Using code blocks, we can improve the addition drill program so that it also prints the correct answer when the user makes a
mistake. */

#include <stdio.h>

int main(void)
{
    int answer;

    printf("What is 10+14? ");
    scanf("%d", &answer);

    if(answer == 10+14) printf("Right!");
    else {
        printf("Sorry, you're wrong. ");
        printf("The answer is 24.");
    }

    return 0;
}
