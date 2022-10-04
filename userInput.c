#include <stdio.h>

// this function get's two values, multiplies them and return the result interger
int calculateSpeed(int speed, int time){
    return speed * time;
}

int main (void) {
    int speed = 0; // this is an integer
    int time = 0;
    
    // get user input with scanf
    printf("speed: ");
    scanf("%d",  &speed);
    printf("Time: ");
    scanf("%d", &time);

    int result = calculateSpeed(speed, time);

    printf("dist: %d \n",  result);

    return 0;
}