#include <stdio.h>

int main (void) {

    char c = 'd';
    char string[] = "shdhhd hshdhhs";

    printf("c: ", c);
    scanf("%c", &c);
    printf("c: %c \n", c);

    printf("string: ", string);
    scanf("%s", &string);
    printf("string: %s \n", string);

    return 0;
}