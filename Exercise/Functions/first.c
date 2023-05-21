#include <stdlib.h>
#include <stdio.h>

float math(float a, float b, char c){
    
    printf("Enter the first number: ");
    scanf("%f", &a);

    printf("Enter the second number: ");
    scanf("%f", &b);

    printf("Enter the operator: ");
    scanf(" %c", &c);

    switch (c)
    {
    case '+':
        return a + b;
        break;

    case '-':
        return a - b;
        break;
    case '*':
        return a * b;
        break;
    case '/':
        return a / b;
        break;
    
    default:
        break;
    }
}

int main(){

    float a, b;
    char c;

    printf("Result: %.2f\n", math(a, b, c));
}