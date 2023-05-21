#include <stdlib.h>
#include <stdio.h>

void milToKm(float *miles){
    float km = *miles * 1.609;
    printf("%.3f miles are %.3f km\n", *miles, km);
}

int main(){

    float miles;

    printf("Enter a distance in miles: ");
    scanf("%f", &miles);

    milToKm(&miles);

    system("pause");
    return 0;
}