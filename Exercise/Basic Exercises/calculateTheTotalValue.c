#include <stdlib.h>
#include <stdio.h>

int main(){

    int a, total = 0;

    printf("Enter a number: ");
    scanf("%d", &a);

    while(a > 0){
        total += a;
        a--;
    }

    printf("The total value is %d\n", total);

    system("pause");
    return 0;
}