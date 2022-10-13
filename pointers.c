#include <stdio.h>

/*

int *p; - Shows the declaration of a pointer.
*p - derefrencing a pointer.
& - the and operator means get the memory address of a given variable.

*/

void refrenceValue();
void addOne();

int main(void) {

    int a[]  = {2, 4, 9, 1, 3, 4};

    printf("memory address: %p\n", a);

    refrenceValue();

    int val = 30;

    addOne(&val);

    printf("%d", val);

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



