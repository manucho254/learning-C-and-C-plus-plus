#include <stdio.h>


// function declarations
void arrayNotation(int *array);
void addOneToArrayValues(int *array, int length);


int main(void) {

    int myArr[] = {1, 2, 3, 4, 5, 6, 7, 8};

    addOneToArrayValues(myArr, 4);
    arrayNotation(myArr);

    for (int i = 0; i < 8; i++) {
        printf("myArr[%d] = %d \n", i, myArr[i]);
    }

    // pointer arithmetic
    addOneToArrayValues(myArr + 3, 5);

    for (int i = 0; i < 8; i++) {
        printf("myArr[%d] = %d \n", i, myArr[i]);
    }

    return 0;
}


// array notation

void arrayNotation (int *array) {
    int *myPointer;
    printf("%d \n", sizeof(array));
    myPointer = array;

    printf("%p \n", myPointer); // get the memory address of the pointer
    printf("%p \n", array); // get the memory address of the array
    printf("%d \n", myPointer[3]); // derefrencing the pointer to return the value of myArr at index 3
}

// this add one to the array values
void addOneToArrayValues (int *array, int length) {
    for (int i = 0; i < length; i++) {
        array[i] += 1;
    }
}