#include <stdlib.h>
#include <stdio.h>

int main(){

    char sentence[1000];
    int i = 0, count = 0;

    printf("Enter a sentence: \n>> ");
    fgets(sentence, sizeof(sentence), stdin);

    while (sentence[i])
    {
        if(sentence[i] == 32){
            count++;
        }
        i++;
    }

    printf("The number of words in the sentence is: %d\n", count + 1);

    system("pause");
    return 0;
}