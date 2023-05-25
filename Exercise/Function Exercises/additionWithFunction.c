#include <stdlib.h>
#include <stdio.h>

void addition(float *num1, float * num2){

    float summ = *num1 + *num2;
    printf("The summation of %.2f and %.2f is %.2f", *num1, *num2, summ);
}

int main(){

    float num1, num2;

    printf("Enter your first numbers: ");
    scanf("%f", &num1);

    printf("Enter your second numbers: ");
    scanf("%f", &num2);

    addition(&num1, &num2);
    return 0;
}