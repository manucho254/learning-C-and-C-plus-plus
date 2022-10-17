#include <stdio.h>

//  more on arrays and pointers

void addOne(int array[], int length);
void addToArray(int *array, int length);
void accessArrayValues();
void pointerArithmetic();
void moveUpInPointers();

int main(void) {

    int a[] = {1, 2, 3};
    // addOne(a, 3);
    addToArray(a, 3);

    for (int i = 0;  i < 3; i++) {
        printf("a[%d] = %d \n", i, a[i]);
    }

    accessArrayValues();
    pointerArithmetic();
    moveUpInPointers();

    return 0;
}


void addOne(int array[], int length) {
    for (int i = 0; i < length; i++) {
        array[i] += 1;
        printf("%d \n", array[i]);
    }
}

void addToArray(int *array,  int length) {
    for (int i = 0; i < length; i++) {
        array[i] += 1;
    }
}

// accessing array values using pointers

void accessArrayValues() {
    int a[] = {1, 2, 3};
    int *p;
    p = a;

    printf("p: %p \n", p);
    printf("a: %p \n", a);

    // array notation
    printf("p[2] %d \n", p[2]);
    printf("a[2] %d \n", a[2]);
}


// pointer arithmetic

void pointerArithmetic () {
    int a[] = {1, 2, 3};
    int *p;
    p = a;

    // using pointer notation with a pointer.

    printf("*( p + 1) = %d \n",  *(p + 1));
    printf("*( p + 2) = %d \n",  *(p + 2));

    // using pointer notation with an array.

    printf("*( a + 1) = %d \n",  *(a + 1));
    printf("*( a + 2) = %d \n",  *(a + 2));
}


// use case scenarios of pointer arithmetic

/*
  this when we call the addOne function and use the pointer araimetic on the array.
  addOne(a + 5, 5),  by adding five to the array we move five slots in memory and now
  start from the sixth value in the array
*/

void moveUpInPointers() {

    int a[] = {1,2,3,4,5,6,7,8,9,10};

    addOne(a + 5,  5);
}