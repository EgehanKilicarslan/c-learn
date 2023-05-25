#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){

    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int i = 0;
    int j = strlen(str) - 1;
    int isPalendrom = 1;

    while(i < j){

        if (str[i] != str[j])
        {
            isPalendrom = 0;
            break;
        }
        i++;
        j--;
    }

    if(isPalendrom){
        printf("Palendrom");
    }
    else{
        printf("Not Palendrom");
    }

    return 0;
}