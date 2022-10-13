/*

While loops

*/
#include <stdio.h>


// function initialization
void guessGame ();
int getAverage ();


int main(void) {

    int i = 0;
    
    while (i < 5) {
        printf("i: %d\n", i);
        i = i + 1;
    }

    while (i < 5) {
        printf("i: %d\n", i);
        i += 1;
    }

    while (i < 5) {
        printf("i: %d\n", i);
        i++;
    }

    while (i < 5){
        printf("i: %d \n");
        i--;
    }

    while (i < 5) {
        printf("i: %d \n");
        i = i - 1;
    }

    while (i < 5) {
        printf("i: %d \n");
        i -= 1;
    }
    
    guessGame();
    printf("Average: %d", getAverage());

    return 0;
}


void guessGame() {

    int guess = 20;
    int number = 0;
    int guessCount = 0;

    while (number != guess) {
        printf("Enter guess: ");
        scanf("%d", &number);
        if (number != guess) {
            printf("Invalid Guess, Try again: \n");
            guessCount++;
        }
    };

    printf("Your geuss count is %d \n", guessCount);
    printf("You guessed correctly: \n");

    return 0;
}


int getAverage() {

    int i = 0;
    int number = 0;
    int total = 0;
    int avarageValue = 0;
    int totalNumbers = 0;

    printf("How many number ? ");
    scanf("%d", &totalNumbers);

    while (i < totalNumbers) {
        printf("Enter Number %d: ", i+1);
        scanf("%d",  &number);
        total = total + number;
        i++;
    }

    printf("Total: %d \n",  total);
    avarageValue = total / totalNumbers;

    return avarageValue;
}