#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int num;

    printf("Enter a number: \n>> ");
    scanf("%d", &num);

    if(num < 0){
        printf("-> Your number should be positive\n");
    }
    else if(num % 17 == 0){
        printf("-> Your number is divisible by 17\n");
    }
    else if(num % 13 == 0){
        printf("-> Your number is divisible by 13\n");
    }
    else if(num % 17 == 0 && num % 13 == 0){
        printf("-> Your number is divisible by 17 and 13\n");
    }
    else{
        printf("-> Your number is not divisible by 17 or 13\n");
    }

    system("pause");
    return 0;
}