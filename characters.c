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

    //strings
    
    char email[20];
    char password[20];
    char confirmPassword[20];

    printf("Enter email: ");
    scanf("%s", &email);

    printf("Enter password: ");
    scanf("%s", &password);

    printf("Enter confirm password: ");
    scanf("%s", &confirmPassword);
    

    return 0;
}