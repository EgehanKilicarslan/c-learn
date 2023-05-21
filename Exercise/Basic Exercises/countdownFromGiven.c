#include <stdlib.h>
#include <stdio.h>

int main(){

    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    while(a > 0){
        printf("%4d", a);
        a--;
    }
    printf("\n");

    system("pause");
    return 0;
}