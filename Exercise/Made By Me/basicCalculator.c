#include <stdlib.h>
#include <stdio.h>

int main(){
    
    char again = 'y';

    do{
        int numCount;
        float result = 0;
        char operator;

        system("cls");

        printf("Basic Calculator\n");

        printf("Enter operator: ");
        scanf(" %c", &operator);

        printf("How many numbers do you want to calculate? ");
        scanf("%d", &numCount);

        float numbers[numCount];

        for(int i = 0; i < numCount; i++){
            printf("%d) Enter number: ", i + 1);
            scanf("%f", &numbers[i]);
        }

        switch (operator)
        {
        case '+':
            for(int i = 0; i < numCount; i++){
                result += numbers[i];
            }
            break;
        case '-':
            for(int i = 0; i < numCount; i++){
                result -= numbers[i];
            }
            break;
        case '*':
            for(int i = 0; i < numCount; i++){
                result *= numbers[i];
            }
            break;
        case '/':
            for(int i = 0; i < numCount; i++){
                result /= numbers[i];
            }
            break;
    
        default:
            printf("Invalid operator!");
            break;
        }

        printf("Result: %f", result);

        printf("\nDo you want to calculate again? (y/n): ");
        scanf(" %c", &again);
        
    }while(again == 'y' || again == 'Y');
    printf("Thank you for using my calculator!");
    

    return 0;
}