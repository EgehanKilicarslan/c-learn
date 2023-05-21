#include <stdio.h>
#include <stdlib.h>

void fuction(float *x, float *result){
    *result = (*x * *x * *x) + (13 * *x * *x) + (47 * *x) + 5;
    printf(">> f(%.3f): %.3f", *x, *result);
}

int main(){

    float x, result;

    printf("Enter a number: ");
    scanf("%f", &x);

    fuction(&x, &result);
    result;

    system("pause");
    return 0;
}