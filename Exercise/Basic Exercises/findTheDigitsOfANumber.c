#include <stdlib.h>
#include <stdio.h>

int main(){
    int x, hundertsDigit, tensDigit, onesDigit;

    printf("Enter a number between 0 and 10000: ");
    scanf("%d", &x);

    hundertsDigit = 100*(x%1000/100%10);
    tensDigit = 10*(x%100/10);
    onesDigit = x%10;

    printf("The hunderts digit is %d\n", hundertsDigit);
    printf("The tens digit is %d\n", tensDigit);
    printf("The ones digit is %d\n", onesDigit);

    system("pause");
    return 0;
}