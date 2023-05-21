#include <stdlib.h>
#include <stdio.h>

int main(){

    float minute, result;

    printf("Enter the number of minutes: \n>> ");
    scanf("%f", &minute);

    if(minute > 3){
        minute -= 3;
        result = minute * 0.08 + 0.25;
    }else{
        result = 0.25;
    }

    printf("The total charge is $%.2f\n", result);


}