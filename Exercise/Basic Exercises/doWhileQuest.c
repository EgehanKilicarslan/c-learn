#include <stdlib.h>
#include <stdio.h>

int main(){
    float a;
    float result = 0;

    printf("Enter a positive number: ");
    scanf("%f", &a);

    if(a <= 0){
        printf("You should enter a positive number\n");
    }
    else{
        do{
            result += 1.0/a;
            a--;
        }while(a > 0);
        printf("The result is: %.2f\n", result);
    }

    system("pause"); 
    return 0;
}