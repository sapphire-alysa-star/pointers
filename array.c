#include <stdio.h>

int main() {
    
    int marks[10] = {50, 55, 67, 73, 45, 21, 39, 70, 49, 51};
    int i, sum = 0;
    double avg;

    for (i = 0; i <= 9; i++){
        sum += marks[i];
    }

    avg = (double)sum / 10;
    printf("Average: %f\n", avg);
    return 0;    

}