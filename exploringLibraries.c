#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
ctype.h library == check if string is lowercase or uppercase
string.h library

*/


void checkCase(char value);
void flipCase(char stringVal[], int length);

int main(void) {

    char stringVal[] = "This IS tHe Way.";

    int stringLength = strlen(stringVal);

    for (int i = 0; i < stringLength; i++) {
        printf("%c ",  stringVal[i]);
        checkCase(stringVal[i]);
    }

    flipCase(stringVal, stringLength);

    return 0;
}

void checkCase(char value) {

    if (isupper(value)) {
        printf("Upprcase\n");
    }else if (islower(value)) {
        printf("Lowercase\n");
    }else{
        printf("another value\n");
    }
}

// change the case of the string value
void flipCase(char stringVal[], int length) {

    stringVal[0] = tolower( stringVal[0]);
    stringVal[1] = toupper( stringVal[1]);

    printf("%s \n", stringVal);

    for (int i = 0; i < length;  i++){
        if (isupper(stringVal[i])) {
            stringVal[i] = tolower(stringVal[i]);
        }else if (islower(stringVal[i])) {
            stringVal[i] = toupper(stringVal[i]);
        }
    }

    printf("%s \n", stringVal);

    return 0;
}