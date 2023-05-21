#include <stdlib.h>
#include <stdio.h>

int main(){

    int a, b, c;

    printf("Enter the first angle of the triangle: \n>> ");
    scanf("%d", &a);
    printf("Enter the second angle of the triangle: \n>> ");
    scanf("%d", &b);
    printf("Enter the third angle of the triangle: \n>> ");
    scanf("%d", &c);

    if(a + b + c != 180){
        printf("The triangle is not valid.\n");
    }
    else{
        if(a == b == c){
            printf("The triangle is equilateral.\n");
        }
        else if(a == b || a == c || b == c){
            printf("The triangle is isosceles.\n");
        }
        else{
            printf("The triangle is scalene.\n");
        }
    }
}