#include <stdlib.h>
#include <stdio.h>

int main(){
    
    char letter;

    printf("Enter a letter: \n>> ");
    scanf("%c", &letter);

    if (letter >= 'a' && letter <= 'z'){
        printf("-> Alphabetical order: %d\n", (int)letter - (int)'a' + 1);
    }
    else if (letter >= 'A' && letter <= 'Z'){
        printf("-> Alphabetical order: %d\n", (int)letter - (int)'A' + 1);
    }
    else{
        printf("-> Invalid letter\n");
    }
}