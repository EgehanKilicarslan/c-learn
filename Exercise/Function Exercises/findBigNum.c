#include <stdlib.h>
#include <stdio.h>

void found(int num1, int num2){

    if(num1 > num2){
        printf("%d is bigger than %d", num1, num2);
    }
    else if(num2 > num1){
        printf("%d is bigger than %d", num2, num1);
    }
    else{
        printf("%d is equal to %d", num1, num2);
    }
}

int main(){

    int num1, num2;

    printf("Enter a number: ");
    scanf("%d", &num1);
    printf("Enter another number: ");
    scanf("%d", &num2);

    found(num1, num2);

    return 0;
}