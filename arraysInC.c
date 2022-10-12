#include <stdio.h>

/*
Intitalizing arrays 

int grades[] = {1, 2 , 4, 6 ,5}

int grades[5] = {1, 2 , 4, 6 ,5}

int grades[5];
grades[0] = 1;
grades[1] = 2;
grades[2] = 4;
grades[3] = 6;
grades[4] = 5;

*/

int getAverage(int array[]);

int main (void) {

    int values1[] = {1, 2 , 4, 6 ,5};

    int values2[5] = {1, 2 , 4, 6 ,5};

    int grades[5];

    grades[0] = 92;
    grades[1] = 85;
    grades[2] = 72;
    grades[3] = 73;
    grades[4] = 95;

    for (int i = 0; i < 5; i++){
        printf("grade[%d] = %d \n", i, grades[i]);
    }
    printf("grade[2] = %d\n",  grades[2]);

    getAverage(grades);

    return 0;
}

int getAverage (int array[5]) {

    array[2] = array[2] + 8; // changing array values

    printf("%d\n", array[6] = 100);

    int total = 0;

    for (int i =0; i < 5; i++) {
        total += array[i];
    }

    printf("avarage: %d\n", total / 5);

    return 0;
}
