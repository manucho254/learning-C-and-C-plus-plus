#include <stdio.h>


void oddOrEven() {
    // check if number is even or odd
    int value = 0;

    printf("Enter your Number: \n");
    scanf("%d", &value);

    if (value % 2 == 0){
        printf("%d Is even \n", value);
    }
    else {
        printf("%d Is odd \n", value);
    }
}

void calculations () {
    int x = 11, y = 3;

    int divide = x / y;
    int moduler = x % y;

    printf("divide: %d \n", divide);
    printf("moduler: %d \n", moduler);
}

int main(void) {
    oddOrEven();
    float x = 5.2;
    double y = -9.8;

    printf("x: ");
    scanf("%f", &x);
    printf("x: %f\n", x);

    printf("y: ");
    scanf("%lf", &y);
    printf("y: %lf\n", y);

    calculations();
    // more ways of using doubles

    /*
        double x = 5.2, y = 2.5; // inline intilailization
        double multiply = x * y; //  multiply
        double adding = x + y; // add
        double divide = x / y; // divide
        double subscribe = x - y; //minus
    */
}

