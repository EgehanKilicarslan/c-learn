#include <stdlib.h>
#include <stdio.h>

int main(){

    printf("ASCII Table\n");
    printf("-----------\n");
    printf("Dec\tHex\tOct\tChar\n");
    printf("---\t---\t---\t----\n");

    for(int i = 0; i < 128; i++){
        printf("%d\t%x\t%o\t%c\n", i, i, i, i);
    }

    system("pause");
    return 0;
}