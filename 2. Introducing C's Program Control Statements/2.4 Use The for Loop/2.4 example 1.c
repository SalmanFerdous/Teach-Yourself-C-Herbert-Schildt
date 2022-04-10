/* The addition-drill program created earlier can be enhanced using a for loop. The version shown here asks for the sums of the
numbers between 1 and 10. That is, it asks for 1 + 1, then 2 + 2, and so on. This program would be useful to a first grader who is
learning to add. */

#include <stdio.h>

int main(void)
{
    int answer, count;

    for(count=1; count<11; count=count+1) {
        printf("What is %d + %d? ", count, count);
        scanf("%d", &answer);

        if(answer == count+count) printf("Right!");
        else {
            printf("Sorry, you're wrong. ");
            printf("The answer is %d. ", count+count);
        }
    }

    return 0;
}
