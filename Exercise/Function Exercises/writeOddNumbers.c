#include <stdlib.h>
#include <stdio.h>

void write(int num){

    for(int i = num; i >= 0; i--){
        if(i % 2 != 0){
            printf("%d\n", i);
        }
    }
}

int main(){

    int num;

    printf("Please enter a possitive number: \n>> ");
    scanf("%d", &num);

    write(num);

    return 0;
}