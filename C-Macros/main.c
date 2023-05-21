#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define circleArea(r) (PI * r * r)
#define number 10

#if(!defined(number) || number < 10)
#error Number is not defined or less than 10
#endif


int main(){

    printf("File: %s\n", __FILE__);
    printf("Date: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    printf("Line: %d\n", __LINE__);
    printf("ANSI: %d\n\n", __STDC__);

    float rs;
    printf("Enter your r value: ", rs);
    scanf("%f", &rs);
    printf("Area of circle: %.2f\n", circleArea(rs));

    #ifdef PI
        printf("Area of circle: %.2f\n", circleArea(rs));
    #else
        printf("PI is not defined\n");
    #endif

    #if(number == 10)
        printf("Number: %d\n", number);
    #else
        printf("Number is not defined\n");
    #endif


    system("pause");
    return 0;
}