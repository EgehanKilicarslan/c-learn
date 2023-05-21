#include <stdlib.h>
#include <stdio.h>

void compare(int *a, int *b, char *result){

    if(*a > *b){
        *result = printf("%d is greater than %d\n", *a, *b);
    }
    else if(*a < *b){
        *result = printf("%d is less than %d\n", *a, *b);
    }
    else{
        *result = printf("%d is equal to %d\n", *a, *b);
    }
}

int main(){

    int a, b;
    char result[100];

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    compare(&a, &b, &result[100]);
    result;

    system("pause");
    return 0;
}