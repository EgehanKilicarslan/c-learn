#include <stdlib.h>
#include <stdio.h>

void found(int *a, int *b){
    if (*a > 0 && *b < 0 || *a < 0 && *b > 0)
        printf(">> The result is negative\n");
    else
        printf(">> The result is positive\n");
}

int main(){

    int a, b;

    printf("Enter your first numbers: ");
    scanf("%d", &a);
    printf("Enter your second numbers: ");
    scanf("%d", &b);

    found(&a, &b);

    system("pause");
    return 0;
}