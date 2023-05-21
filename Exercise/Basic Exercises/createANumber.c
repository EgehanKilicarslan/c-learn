#include <stdlib.h>
#include <stdio.h>

void calc(int *a, int *b, int *c){
    if(*a >= 10 || *b >= 10 || *c >= 10){
        printf("-> Your numbers should less than 10\n");
    }
    else{
        int num = *a * 100 + *b * 10 + *c;
        printf("-> Your number is: %d\n", num);
    }
}

int main(){

    int a, b, c;

    printf("Enter your first number: \n>> ");
    scanf("%d", &a);
    printf("Enter your second number: \n>> ");
    scanf("%d", &b);
    printf("Enter your third number: \n>> ");
    scanf("%d", &c);

    calc(&a, &b, &c);
}