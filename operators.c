#include <stdio.h>

/*

 relational operators:
 -------------------------

 >  --- greater than
 < ---  less than
 >=  --- greater or equal to
 <= --- less or equal to
 == --- exactly equal to
 != --- not equal to


 logical operators:
 ------------------
 && --- and both conditions need to be true
 || --- or any condition can be true
 ! --- not value

*/

int main (void) {

    int number = 0;
    int secondNumber = 20;

    printf("Enter number: ");
    scanf("%d", &number);

    if (number > 30) printf("greater than \n");
    
    if (number < 30) printf("less than \n");

    if (number >= 50) printf("greater or equal to \n");

    if (number <= 50) printf("less or equal to \n");

    if (number == 30) printf("equal to 30 \n");
    
    if (number != 30) printf("not equal to 30 \n");

    if (number == 50 && secondNumber == 20) printf("correct values \n");

    if (number == 50 || secondNumber == 20) printf("one value is correct \n");

    if ( !secondNumber) printf("Not second number");
    
    return 0;
}