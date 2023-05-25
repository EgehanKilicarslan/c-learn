#include <stdlib.h>
#include <stdio.h>

void oddOrEven(int num){

    if(num % 2 == 0){
        printf("%d is an even number.", num);
    }
    else{
        printf("%d is an odd number.", num);
    }
}

int main(){

    int num;

    printf("Please enter a number: \n>> ");
    scanf("%d", &num);

    oddOrEven(num);

    return 0;
}