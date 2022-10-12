/*
 do while loops
*/

#include <stdio.h>


int main (void) {

    int i = 0;
    int number = 0;

    do {
        printf("i: %d \n", i);
        i++;
    }while (i < 5);

    do {
        printf("Enter number (>0): ");
        scanf("%d", &number);
    }while (number <= 0);

    do {
        printf("Enter number (>or=5): ");
        scanf("%d", &number);
    }while (number >= 5);

    return 0;
}
