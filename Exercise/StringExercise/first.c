#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char string1[6] = "bonne";
    char string2[7] = "soiree";
    char string3[12];

    strcpy(string3, string1);
    strcat(string3, string2);

    printf("%s\n", string3); 

    strncpy(string3, string1, 6);
    strncat(string3, string2, 7);

    printf("%s\n", string3);

    system("pause");
    return 0;
}