#include <stdlib.h>
#include <stdio.h>

int main(){

    float rabbit = 1042, bird = 2272, year = 0;

    while(bird > rabbit){
        rabbit += rabbit/100*3.8;
        bird += bird/100*1.2;
        year++;
    }

    printf("It takes %.0f years for the bird population to be less than the rabbit population.\n", year);

    system("pause");
    return 0;
}