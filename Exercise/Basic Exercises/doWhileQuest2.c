#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float a;

    printf("Enter a possitive number: \n>> ");
    scanf("%f", &a);

    if(a < 0){
        printf("You should enter a possitive number: \n>> ");
        scanf("%f", &a);
    }

    if(a == 0){
        system("exit");
    }
    else{
        printf("The square root of %.2f is %.2f\n", a, sqrt(a));
        system("pause");
    }
    return 0;
}