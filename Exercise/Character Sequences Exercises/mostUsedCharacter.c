#include <stdlib.h>
#include <stdio.h>

int main(){

    int i = 0;
    char sentence[150], lowerCaseCharacter[26] = {0};

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    while(sentence[i]){
        if(sentence[i] >= 'a' && sentence[i] <= 'z'){
            lowerCaseCharacter[sentence[i] - 'a']++;
        }
        i++;
    }

    char mostUsedCharacter = lowerCaseCharacter[0];

    for(i = 1; i < 26; i++){
        if(lowerCaseCharacter[i] != 0){
            if(lowerCaseCharacter[i] > mostUsedCharacter){
                mostUsedCharacter = i + 'a';
            }
        }
    }

    printf("Most used character: %c\n", mostUsedCharacter);
    
}