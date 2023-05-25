#include <stdlib.h>
#include <stdio.h>

void calc(int *num, int *result){

    for (int i = 1; i <= *num; i++){
        *result *= i;
    }

    printf("The factorial of %d is --> %d\n", *num, *result);
}

int main(){

    int num;
    char again = 'y';
    
    do
    {
        system("cls"); //Clear console

        int result = 1;
        printf(">> Welcome to my factorial calculator! <<\n");

        printf("Enter a number: \n>> ");
        scanf("%d", &num);

        if (num <= 0)
        {
            printf("#ERROR ---> Invalid input! \n");
            printf("Enter a number: \n>> ");
            scanf("%d", &num);
        }
        else{
            calc(&num, &result);
        }

        printf("Do you want to calculate the factorial of a number again? (y/n): \n>> ");
        scanf(" %c", &again);
    } while (again == 'y' || again == 'Y');
    printf(">> Thank you for using the calculator! <<");

    return 0;
}