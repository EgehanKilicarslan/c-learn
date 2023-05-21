//IMPORTANT EXAMPLE

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    int n, opt;
    float x;

    do{
        float summ = 0;
        printf("Enter the value of n: ");
        scanf("%d", &n);
        printf("Enter the value of x: ");
        scanf("%f", &x);

        for(int i = 1; i <= 2*n-1 ; i+=2){
            summ += i/pow(x, 2*i);
        }

        printf("The sum is: %.2f\n", summ);

        printf("Do you want to continue? (1 - Yes): ");
        scanf("%d", &opt);
    }while(opt == 1);

    printf("\nThank you for using our program!\n");

    system("pause");
    return 0;
}