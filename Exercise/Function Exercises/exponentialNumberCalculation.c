#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void calc(float *num, float *power){
    printf("The power of %.2f to %.2f is %.2f", *num, *power, pow(*num, *power));
}

int main(){

    float num, power;
    char again = 'y';

    do
    {
        printf("Enter the number: ");
        scanf("%f", &num);

        printf("Enter the power: ");
        scanf("%f", &power);

        calc(&num, &power);

        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &again);
    } while (again == 'y' || again == 'Y');

    return 0;
}