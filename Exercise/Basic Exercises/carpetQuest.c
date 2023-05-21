#include <stdlib.h>
#include <stdio.h>

int main(){
    float m2, priceM2 = 40, salery = 200;

    printf("Enter the value of m2: ");
    scanf("%f", &m2);

    printf("The price of the carpet is: %.2f\n", m2 * priceM2 + salery);
    
    system("pause");
    return 0;
}