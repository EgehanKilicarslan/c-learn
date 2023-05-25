#include <stdlib.h>
#include <stdio.h>

//Function prototype
void calc(float *num1, float *num2, char *operator){

    switch (*operator)
    {
    case '+':
        printf("The sum of %.2f and %.2f is %.2f", *num1, *num2, *num1 + *num2);
        break;
    case '-':
        printf("The difference of %.2f and %.2f is %.2f", *num1, *num2, *num1 - *num2);
        break;
    case '*':
        printf("The product of %.2f and %.2f is %.2f", *num1, *num2, *num1 * *num2);
        break;
    case '/':
        printf("The quotient of %.2f and %.2f is %.2f", *num1, *num2, *num1 / *num2);
        break;
    
    default:
        break;
    }
}

int main(){

    float num1, num2;
    char operator, again = 'y';

    do
    {
        system("cls"); //Clear console

        printf("Enter the operator: ");
        scanf(" %c", &operator);

        printf("Enter the first number: ");
        scanf("%f", &num1);
        printf("Enter the second number: ");
        scanf("%f", &num2);

        calc(&num1, &num2, &operator);

        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &again);
    } while (again == 'y' || again == 'Y');
    printf("Thank you for using the calculator!");

    return 0;
}