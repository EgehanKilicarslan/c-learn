#include <stdlib.h>
#include <stdio.h>

void foundPerfectNumber(int num){
    int sum = 0;

    for (int i = 1; i < num; i++){
        if (num % i == 0){
            sum += i;
        }
    }

    if(sum == num){
        printf("%d is a perfect number.", num);
    }
    else{
        printf("%d is not a perfect number.", num);
    }

}

int main(){

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    foundPerfectNumber(num);

    return 0;
}