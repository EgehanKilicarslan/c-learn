#include <stdlib.h>
#include <stdio.h>

int main(){
    float a, b;
    char operator;

    printf("Enter your first number: \n>> ");
    scanf("%f", &a);
    printf("Enter your second number: \n>> ");
    scanf("%f", &b);
    printf("Enter your operator: \n>> ");
    scanf("%c", &operator);

    if (a <= 0 || b <= 0){
        system("exit");
    }
    else{
        if(operator == '+'){
            printf("1/%.2f + 1/%.2f = %.2f\n", a, b, 1/a + 1/b);
        }
        else if (operator == '-')
        {
            printf("1/%.2f - 1/%.2f = %.2f\n", a, b, 1/a - 1/b);
        }
        else{
            printf("Invalid operator\n");
        }
        system("pause");
    }
    return 0;
}