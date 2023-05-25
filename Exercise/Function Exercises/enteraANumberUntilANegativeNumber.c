#include <stdlib.h>
#include <stdio.h>

void enterANumberUntilANegativeNumber(int num){

    do
    {
        printf("Enter a number: ");
        scanf("%d", &num);
    } while (num >= 0);
    
}

int main(){

    int num;

    enterANumberUntilANegativeNumber(num);
    printf("Thank you!");
    
    return 0;
}