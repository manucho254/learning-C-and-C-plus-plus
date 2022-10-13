#include <stdio.h>


void linearSearch();


int main (void) {

    linearSearch();
    return 0;
}

// linearSearch
void linearSearch() {
    int data[6] = {2, 4, 5, 6, 7};
    data[5] = 5;

    int occurences = 0;

    for (int i = 0; i < 6; i++){
        if (data[i] == 5) {
            occurences ++;
            printf("found %d \n", data[i]);
        }
    }
    printf("%d occurences.", occurences);

    return 0;
}

// binarySearch

int binarySearch (void) {
    // to come soon
}
