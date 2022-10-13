#include <stdio.h>

int findMax(int a, int b);
float triple(float num);
double add(double num1, double num2);
double power(double x, double n);
void printVal();
void addToArray();

int main (void) {

    int num1 = 0;
    int num2 = 0;
    int max = 0;

    printf("Enter first Number: ");
    scanf("%d", &num1);

    printf("Enter second Number: ");
    scanf("%d", &num2);

    max = findMax(num1, num2);

    printf("max = %d \n",  max);

    float x = 5.0;

    x = triple(x);

    printf("x: %.2f \n", x);

    printf("value = %.2f \n", add(2.0, 2.384));

    printf("power = %.2f \n", power(4, 3));

    printVal();

    int arr[] = {2,3,9,1,3,5};

    addToArray(arr, 6);

    for (int i= 0; i < 6; i++) {
        printf("a[%d] = %d \n", i, arr[i]);
    }

    return 0;
}

int findMax(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    }else {
        return num2;
    }
}

float triple(float num) {
    return num * 3;
}

double add(double num1, double num2) {
    
    double result = num1 + num2;

    return result;
}

float mult(double x, double y) {
    return x * y;
}


double power(double x, double n) {

    double result = x;
    for (int i = 1; i < n; i++) {
        result = mult(result, x);
    }

    return result;
}

void printVal () {
    printf("We don't return anything in void functions \n");
    printf("cool \n");
}


void addToArray(int array[],  int length) {
    for (int i =0; i < length; i++) array[i] += 2;
}