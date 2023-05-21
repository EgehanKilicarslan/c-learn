#include <stdio.h>
#include <stdlib.h>

int main(){

    int a = 10;
    {
        int a = 20;
        printf("a = %d\n", a);
    }
}