#include <stdlib.h>
#include <stdio.h>

void results(int *a, int *b, int *c, char *result){
    int max = *a;

    if(*b > max){
        max = *b;
    }
    if(*c > max){
        max = *c;
    }

    int min = *a;

    if(*b < min){
        min = *b;
    }
    if(*c < min){
        min = *c;
    }

    *result = printf("The largest number is %d\nThe smallest number is %d\n", max, min);
}

int main(){
    int a, b, c;
    char result[150];

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);

    results(&a, &b, &c, &result[150]);
    result;

    system("pause");
    return 0;
}