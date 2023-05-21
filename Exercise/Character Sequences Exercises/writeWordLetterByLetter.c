#include <stdlib.h>
#include <stdio.h>

int main(){

    char sentence[1000];

    printf("Enter a sentence: \n>> ");
    fgets(sentence, sizeof(sentence), stdin);

    for(int i = 0; sentence[i]; i++){
        printf("%c\n", sentence[i]);
    }

    system("pause");
    return 0;
}