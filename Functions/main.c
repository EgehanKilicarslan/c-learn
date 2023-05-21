#include <stdlib.h>
#include <stdio.h>

void oddoreven(int i){
    scanf("%d", &i);
    if(i % 2 == 0){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }
}

int oddoreven2(int i){
    scanf("%d", &i);
    if(i % 2 == 0){
        return 0;
    }
    else{
        printf("Odd\n");
        return 1;
    }
}

int main(int argc, char *argv[]){
    
    int i, result;
    oddoreven(i);
    

    result = oddoreven2(i);
    if(result == 0){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }
}
