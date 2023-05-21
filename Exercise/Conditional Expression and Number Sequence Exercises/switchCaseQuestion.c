#include <stdlib.h>
#include <stdio.h>
#define taxBook 4
#define taxLuxery 19.6
#define taxFood 5.6

void menu(){
    char percent = '%';
    printf("\t\t__________________________\n");
    printf("________________|Welcome to the Tax Info!|______________\n");
    printf("|\t\t\t\t\t\t\t|\n");
    printf("|  Tax Item\t\tItem Code\t   Tax Percent  |");
    printf("\n|  --------\t\t---------\t   -----------\t|\n");

    printf("|  Book\t\t\t0\t\t   %c4.0\t\t|\n", percent);
    printf("|  Luxery Item\t\t1\t\t   %c19.6\t|\n", percent);
    printf("|  Food\t\t\t2\t\t   %c5.6\t\t|\n", percent);
    printf("---------------------------------------------------------");

    printf("\n\n");
}

int main(){

    int opt;

    do{
        int itemCode;
        float itemPriceWithoutTax, itemPriceWithTax;
        system("cls");
        menu();

        printf("1) Enter the code of the item you want: \n>>");
        scanf("%d", &itemCode);

        printf("2) Enter the price of the item without tax: \n>>");
        scanf("%f", &itemPriceWithoutTax);

        if(itemPriceWithoutTax < 0){
            printf("#ERROR -> Invalid price!\n");
            printf("Do you want to contiune (1 - Yes): \n>> ");
            scanf("%d", &opt);
        }
        else{
            switch (itemCode)
            {
            case 0:
                itemPriceWithTax = itemPriceWithoutTax + (itemPriceWithoutTax / 100 * taxBook);
                printf("-> The price of the item with tax is: %f\n", itemPriceWithTax);
                break;
            case 1:
                itemPriceWithTax = itemPriceWithoutTax + (itemPriceWithoutTax / 100 * taxLuxery);
                printf("-> The price of the item with tax is: %f\n", itemPriceWithTax);
                break;
            case 2:
                itemPriceWithTax = itemPriceWithoutTax + (itemPriceWithoutTax / 100 * taxFood);
                printf("-> The price of the item with tax is: %f\n", itemPriceWithTax);
                break;
    
            default:
                printf("#ERROR -> Invalid item code!\n");
                break;
            }

            printf("Do you want to continue? (1 - Yes): ");
            scanf("%d", &opt);
        }

    }while(opt == 1);
    printf("\nThank you for using our program!\n");

    system("pause");
    return 0;
}