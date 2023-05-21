#include <stdlib.h>
#include <stdio.h>

void calc(float *a, float *b, float *c){

    float avg = (*a + *b + *c) / 3;

    printf("-> The average of your numbers is: %.2f\n", avg);
    system("pause");
    return;
}

int main(){

    float a, b, c;

    printf("Enter your first number: \n>> ");
    scanf("%f", &a);
    printf("Enter your second number: \n>> ");
    scanf("%f", &b);
    printf("Enter your third number: \n>> ");
    scanf("%f", &c);

    calc(&a, &b, &c);
}