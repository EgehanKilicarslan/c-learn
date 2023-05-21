#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void results(int *x, int *y, int *result){
    *result = pow(*x, *y);
}

int main(){

    int x = 4, y = 5, result;

    results(&x, &y, &result);
    printf("The result is %d\n", result);

    system("pause");
    return 0;
}