#include <stdio.h>
#include <stdlib.h>

/*
  &a hold the memory address of variable a,
  &b holds the memory address of variable b,

  stack:
  ------

  // variable     address    value
  //   a            12         37
  //   b            13         40

  heap
  ----
*/

void usingMalloc();
void usingCalloc();
void usingRealocate();

int main(void) {
    
    usingMalloc();
    usingCalloc();
    usingRealocate();

    return 0;
}


// memory allocation with malloc 
// faster than calloc but doesn't clean the memory location values first before the allocation.

void usingMalloc() {
    int *a;
    a = malloc(sizeof(int) * 5);
    a[0] = 1;
    a[1] = 5;
    a[2] = 7;
    a[3] = 9;
    a[4] = 11;

    for(int i = 0; i < 5; i++) {
        printf("a[%d] = %d \n",  i, a[i]);
    }

    printf("\n");
    
    free(a);
}


// memory allocation with calloc
// slower than malloc but cleans the memmory location values first before the allocation.

void usingCalloc() {

    int *a;
    a = calloc(5, sizeof(int));
    a[0] = 1;
    a[1] = 5;
    a[2] = 7;
    a[3] = 9;
    a[4] = 11;

    for(int i = 0; i < 5; i++) {
        printf("a[%d] = %d \n",  i, a[i]);
    }

    free(a);
}


// realocating memory using realloc

void usingRealocate(){

    int *numbers; 
    int size = 2;
    numbers = malloc(sizeof(int) * size);
    int input = 0, accepted = 0;

    do{
        if (accepted == size) {
            size += 2;
            numbers = realloc(numbers , sizeof(int) * size);
        }

        printf("Enter number: ");
        scanf("%d", &input);

        if (input != -1) {
            numbers[accepted] = input;
            accepted++;
        }

    }while (input != -1);

    free(numbers);
}

