#include <stdlib.h>
#include <stdio.h>

int main(){

    char sentence[1000];
    int i = 0;

    printf("Enter a sentence: \n>> ");
    fgets(sentence, sizeof(sentence), stdin);

    while (sentence[i]){
        i++;
    }

    printf("The number of letters in the sentence is: %d\n", i - 1);

    system("pause");
    return 0;
}