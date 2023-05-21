#include <stdlib.h>
#include <stdio.h>

void arithmetic(int *a, int *b, int *c, int *x, int *result){
    *result = (*a + (*x * *x)) + (*b * *x) + *c;
}

int main(){

    int a, b, c, x, result;

    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);
    printf("Enter the value of x: ");
    scanf("%d", &x);

    arithmetic(&a, &b, &c, &x, &result);
    printf("Your result is: %d\n", result);

    system("pause");
    return 0;
}