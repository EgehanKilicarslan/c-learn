#include <stdlib.h>
#include <stdio.h>

void calc(int *x){
    int i = 0;
    int line = 0;

    while(i <= *x){
        printf("%4d", i);
        i += 17;
        line++;

        if(line == 10){
            printf("\n");
            line = 0;
        }
    }
    printf("\n");
}

int main(){
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    calc(&x);

    system("pause");
    return 0;
}