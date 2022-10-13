#include <stdio.h>
#include <string.h>

/*
methods of the string library
strcmp == compares string values in each index

strlen == check the length of the string.

strcat == concatnates two strings into one.

*/

void loopThroughString();
void getStringLength();
void concatNateString();
void simpleApp();
void compareString();


int main (void) {

    simpleApp();
    // loopThroughString();
    // concatNateString();
    // getStringLength();
    // compareString();

    return 0;

}


void simpleApp() {
    char email[20];
    char password[20];
    char confirmPassword[20];

    printf("Enter email: ");
    scanf("%s", &email);

    printf("Enter password: ");
    scanf("%s", &password);

    do {
        printf("Enter confirm password: ");
        scanf("%s", &confirmPassword);
        if (strcmp(confirmPassword, password) != 0){
            printf("Comfirm password does not match password. \n");
        }
    }while (strcmp(confirmPassword, password) != 0);

    while (password && confirmPassword) {
        if (strlen(password) < 8 || strlen(confirmPassword) < 8){
            printf("Password length cannot be less than 8 \n");
            simpleApp();
            break;
        }else{
            printf("Registration complete");
            break;
        }
    }
}


void loopThroughString() {

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

void getStringLength() {

    char stringValue[20];

    printf("Enter string: ");
    scanf("%s", stringValue);
    printf("stringValue:  %s \n", stringValue);

    char myString[] = "This is nice.";

    //checking string length
    int length = strlen(myString);
    int num_is = 0;

    for (int i = 0;  i < length;  i++){
        if (myString[i] == 'i'){
            num_is++;
        }
    }

    printf("length: %d\n", length);
    printf("Number of I's: %d \n",  num_is);

    return 0;
}

// concatnating string using the string library
void concatNateString() {

    char string1[50] = "The first sentence, ";
    char string2[] = "The second sentence";

    strcat(string1, string2);

    printf("string1: %s\n\n", string1);

    return 0;
}

//compare strings

void compareString(void) {

    char string1[] = "The first sentence";
    char string2[] = "The frst sentence";

    if (strcmp(string1, string2) == 0) {
        printf("Values are the same.");
    }else {
        printf("values are not the same.");
    }

    return 0;
}