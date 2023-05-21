#include <stdlib.h>
#include <stdio.h>

int main(){
    
    float time, distance, avg;

    printf("Enter the distance in km: \n>> ");
    scanf("%f", &distance);

    printf("Enter the time in hours: \n>> ");
    scanf("%f", &time);

    avg = distance / time;
    printf("-> The average speed is: %.2f km/h\n", avg);
}