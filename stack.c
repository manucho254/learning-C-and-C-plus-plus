#include <stdio.h>

/*
  &a hold the memory address of variable a,
  &b holds the memory address of variable b,

  stack:
  ------

  // variable     address    value
  //   a            12         37
  //   b            13         40
  
*/

void randomFunc();

int main(void) {

    int a = 5;
    int b = 6;
    randomFunc ();

    printf("%p \n", &a);
    printf("%p \n", &b);

    return 0;
}

void randomFunc () {

    int c =5;
    int d = 10;
    int arr[10];
    
    printf("%p \n", &c);
    printf("%p \n", &d);
}
