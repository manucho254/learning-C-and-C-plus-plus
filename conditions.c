#include <stdio.h>

/*
 if 

 else if 

 else

*/

int main (void) {

    int grade = 0;

    printf("Grade: ");
    scanf("%d", &grade);

    if (grade >= 75) printf("Passed \n");

    else if (grade >= 50 && grade < 75) printf("avarage \n");

    else printf("failed \n");

    return 0;
}

