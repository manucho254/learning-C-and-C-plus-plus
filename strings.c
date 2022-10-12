#include <stdio.h>


/*


*/

char loopThroughString();
char getStringLength();


int main (void) {
    char string[20] = "shdhhd hshdhhs";
    char email[20];
    char password[20];
    char confirmPassword[20];

    loopThroughString();
    getStringLength();

    printf("Enter email: ");
    scanf("%s", &email);

    printf("Enter password: ");
    scanf("%s", &password);

    printf("Enter confirm password: ");
    scanf("%s", &confirmPassword);

    printf("string: ", string);
    scanf("%s", &string);
    printf("string: %s \n", string);

}


char loopThroughString(void) {

    char stringValue[] = "this is my string";

    for (int i = 0;  i < 18; i++) {
        printf("stringValue[%d] = %c\n", i, stringValue[i]);

        //null terminator
        if (stringValue[i] == '\0') {
            printf("This is null terminator \n");
        }
    }

    printf("stringValue = %s\n", stringValue);

    return 0;
}

char getStringLength() {

    char stringValue[20];

    printf("Enter string: ");
    scanf("%s", stringValue);

    printf("stringValue:  %s \n", stringValue);

    return 0;
}