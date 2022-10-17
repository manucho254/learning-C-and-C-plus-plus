#include <stdio.h>

/*

int *p; - Shows the declaration of a pointer.
*p - derefrencing a pointer.
& - the and operator means get the memory address of a given variable.

*/

void refrenceValue();
void addOne();
void pointerVal();
void addThree(int *a, int *b, int *c);

int main(void) {

    int a[]  = {2, 4, 9, 1, 3, 4};

    printf("memory address: %p\n", a);

    pointerVal();

    refrenceValue();

    int val = 30;

    addOne(&val);

    printf("%d", val);

    int val1 = 1, val2 = 2, val3 = 3;

    addThree(&val1, &val2, &val3);

    printf("\n val1 = %d \n val2 = %d \n val3 = %d \n", val1, val2, val3);

    return 0;
}

void refrenceValue () {
    int a = 5;
    int b = 10;
    int *p; // pointer declaration

    printf("P: %p \n", p); // derenfrencing a pointer

    p = &b;

    printf("&b: %p \n", &b);
    printf("P: %p \n", p); // derenfrencing a pointer
    printf("&a: %p \n", &a);

    a = a + *p;

    printf("a: %d \n",  a);

    p = &a;

    printf("p: %p \n", p);

    // edit pointer value

    *p = *p + 2;

    printf("a: %d \n", a);
}


// pass by refrence or pass by pointer

void addOne(int *a) {
    *a = *a + 1;
}


void pointerVal () {
    int *pk;
    int cb = 200;
    pk = &cb;
    
    printf("%p \n", &cb);

    // printing out the value of a pointer

    printf("%d  \n\n", *pk); // derefrencing the pointer
}

void addThree(int *a, int *b, int *c) {
    *a = *a + 1;
    *b = *b + 1;
    *c = *c + 1;
}



