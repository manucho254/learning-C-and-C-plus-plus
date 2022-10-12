#include <stdio.h>


int checkCase ();

int main (void) {

    int number = 3;

    switch (number) {
        case 0:
            printf("Case 0!\n");
            break;

        case 1:
            printf("Case 1!\n");
            break;

        default:
            printf("This is the default case \n");
    }

    checkCase();

    return 0;
}


int checkCase () {

    char character = 'B';

    switch (character) {
        case 'B':
            printf("B\n");
            break;

        case 'C':
            printf("C\n");
            break;

        default:
           printf("A\n");
    }
    return 0;
}