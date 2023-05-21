#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
    
    char a;

    printf("Enter a character: \n>> ");
    scanf("%c", &a);

    if(isupper(a)){
        printf("-> The character is: %c\n", tolower(a));
    }
    else{
        printf("-> The character is lower\n");
    }
}