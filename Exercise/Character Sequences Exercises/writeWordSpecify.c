#include <stdlib.h>
#include <stdio.h>

int main(){

    char word[30];

    printf("Enter a word: ");
    scanf("%s", &word);

    printf("%c \n", word[0]);

    for(int i = 1; word[i] != '\0'; i++){
        for(int j = 0; j <= i; j++){
            printf("%c ", word[j]);
        }
        printf("\n");
    }
    

    system("pause");
    return 0;
}