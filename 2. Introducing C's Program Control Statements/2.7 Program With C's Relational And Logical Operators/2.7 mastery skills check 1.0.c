/* Write a program that plays a computerized form of the "guess the magic number" game. It works like this: The player has ten tries
to guess the magic number. If the number entered is the value you have selected for your magic number, have the program print the
message "RIGHT!" and then terminate. Otherwise, have the program report whether the guess was high or low and then let the player
enter another number. This process goes on until the player guesses the number or the ten tries have been used up. For fun, you
might want to report the number of tries it takes to guess the number. */

#include <stdio.h>

int main(void)
{
    int magic; /* magic number */
    int guess; /* user's guess */
    int i;

    magic = 1325;
    guess = 0;

    for(i=0; i<10 && guess!=magic; i++) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if(guess == magic) {
            printf("Right!");
            printf(" %d is the magic number.\n", magic);
        }
        else {
            printf("...Sorry, you're wrong...");
            if(guess > magic)
                printf(" Your guess is too high.\n");
            else printf(" Your guess is too low.\n");
        }
    }
    return 0;
}
