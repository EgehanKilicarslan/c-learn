#include <stdio.h>
#include <stdlib.h>

void results(int *result, int *x){
    *result = *x * *x;
}

int main(){
    int x = 4, result;
    results(&result, &x);

    printf("The result is %d\n", result);

    system("pause");
    return 0;
}