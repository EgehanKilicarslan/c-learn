#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

//define a constant and cant be changed
#define PI 3.14

int main(){

    int intexample = 18;
    float floatexample = 3.14;
    bool boolexample = true;
    char charexample = 'a';

    //Sizeof returns the size of a variable
    printf("Size of int: %d\n", sizeof(intexample));

    //Scanf is used to get input from the user
    int scanfexample;
    printf("Enter your age: ");
    scanf("%d", &scanfexample);


    //printf is used to print to the console
    printf("Hello World\n");

    
    //if (condition)
    if (intexample >= 18){
        printf("You are an adult\n");
    } else {
        printf("You are not an adult\n");
    }

    if (boolexample){
        printf("You are male\n");
    } else {
        printf("You are not male\n");
    }

    if (floatexample == 3.14){
        printf("You are pi\n");
    } else {
        printf("You are not pi\n");
    }

    if (charexample == 'a'){
        printf("You are a\n");
    } else {
        printf("You are not a\n");
    }


    int day = 1;

    //switch (variable)
    switch (day)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    
    default:
        break;
    }

    printf("%d", day);


    //const can't be changed
    const int constexample = 10;

    //While Loop
    int i = 0;
    while (i < 5){
        printf("While Loop: %d\n", i);
        i++;
    }

    //Do While Loop
    int j = 0;
    do {
        printf("Do While Loop: %d\n", j);
        j++;
    } while (j < 5);

    //For Loop
    for (int k = 0; k < 5; k++){
        printf("For Loop: %d\n", k);
    }

    //Break
    for (int l = 0; l < 10; l++){
        if (l == 4){
            break;
        }
        printf("Break: %d\n", l);
    }

    //Continue
    for (int m = 0; m < 10; m++){
        if (m == 4){
            continue;
        }
        printf("Continue: %d\n", m);
    }
    
    system("pause");
    return 0;
};