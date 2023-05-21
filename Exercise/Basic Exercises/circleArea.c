#include <stdlib.h>
#include <stdio.h>
#define PI 3.14
#define circleArea(r) PI*r*r

int main(){

    int r;
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);

    printf("The area of the circle is %.2f\n", circleArea(r));

    system("pause");
    return 0;
}