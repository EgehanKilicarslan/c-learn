//IMPORTANT EXAMPLE

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    int n;
    float x, summ = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of x: ");
    scanf("%f", &x);

    for(int i = 1; i <= 2*n-1 ; i+=2){
        summ += i/pow(x, 2*i);
    }

    printf("The sum is: %f", summ);

    system("pause");
    return 0;
}