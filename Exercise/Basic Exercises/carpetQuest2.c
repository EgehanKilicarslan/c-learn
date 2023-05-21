#include <stdlib.h>
#include <stdio.h>

void calc(char *carpetType, int *area){

    if(*carpetType == 'T' || *carpetType == 't'){
        printf("\n-> The total cost of the carpet is: $%.2f", *area * 40.00);
    }else if(*carpetType == 'B' || *carpetType == 'b'){
        printf("\n->The total cost of the carpet is: $%.2f", *area * 50.00);
    }else if(*carpetType == 'S' || *carpetType == 's'){
        printf("\n->The total cost of the carpet is: $%.2f", *area * 60.00);
    }else{
        printf("\n->Invalid carpet code!");
    }

}

int main(){
    printf("\t\t______________________________\n");
    printf("________________|Welcome to the Carpet Store!|_____________\n");
    printf("|\t\t\t\t\t\t\t  |\n");
    printf("|  Carpet Type\t\tCarpet Code\t\tPrice/m2  |");
    printf("\n|  -----------\t\t-----------\t\t--------- |\n");

    printf("|  Tweey\t\tT\t\t\t$40.00\t  |\n");
    printf("|  Bugs\t\t\tB\t\t\t$50.00\t  |\n");
    printf("|  Sylvester\t\tS\t\t\t$60.00\t  |\n");
    printf("-----------------------------------------------------------");

    printf("\n\n");


    int area;
    char carpetType;

    printf("1) Enter the code of the carpet code you want: \n>>");
    scanf("%c", &carpetType);

    printf("2) Enter the area of the room: \n>>");
    scanf("%d", &area);

    calc(&carpetType, &area);

}