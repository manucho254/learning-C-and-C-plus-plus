#include <stdio.h>

// we initialize an interger with int

int calculateSpeed(int speed, int time){
    return speed * time;
}

int main (void) {
    int speed = 20; // this is an integer
    int time = 7;
    
    // get user input with scan
    int result = calculateSpeed(speed, time);

    printf("dist: %d \n",  result);

    return 0;
}