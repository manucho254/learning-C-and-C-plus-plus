/*
for loops
*/

#include <stdio.h>

int evaluateFunc();

int main (void) {

    int i = 0;

    for (i; i < 10; i++){

        printf("i: %d \n", i);
    }

    
    for (int i = 0  ; i < 10; i++){

        printf("i: %d \n", i);
    }

    evaluateFunc();

    return 0;
}


int evaluateFunc() {

    double initial = 0, step = 0, stop = 0;

    do {
        printf("Initial (m): ");
        scanf("%lf",  &initial);
        if (initial < 0 ) printf ("Must be >=0 \n");

    }while (initial < 0);

    do {
        printf("step (m): ");
        scanf("%lf",  &step);
        if (step < 0 ) printf ("Must be > 0 \n");
        
    }while (step <= 0);

    do {
        printf("stop (m): ");
        scanf("%lf",  &stop);
        if (stop < 0 ) printf ("Must be >= 0 \n");
        
    }while (stop < 0);

    printf("\n");
    printf("Meters      Feet\n");
    printf("-------------------- \n");

    for (double conv = initial; conv <= stop; conv += step){
        
         printf("%f  %f \n", conv, conv * 3.28084);

        // cleaning up the output to 2 decimal places
        printf("%.2f  %.2f \n", conv, conv * 3.28084);

        // right aligned characters
        printf("%10.2f  %10.2f \n", conv, conv * 3.28084);

        // left aligned characters
        printf("%-10.2f  %-10.2f \n", conv, conv * 3.28084);
    }

}