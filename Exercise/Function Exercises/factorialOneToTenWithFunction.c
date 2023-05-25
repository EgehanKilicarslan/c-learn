#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void calc(){

    for(int i = 0; i <= 10; i++){
        int result = 1;
        for(int j = 1; j <= i; j++){
            result *= j;
        }
        printf("The factorial of %d is --> %d\n", i, result);
    }
}

int main(){

    calc();
    
}