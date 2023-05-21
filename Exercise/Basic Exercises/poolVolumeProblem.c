#include <stdlib.h>
#include <stdio.h>

void calc(float *volume){
    printf("%.3f Liters of water is needed to fill the pool.", *volume/1000);
}

int main(){
    float length, width, height, volume;

    printf("Enter the length(m) of the pool: ");
    scanf("%f", &length);
    printf("Enter the width(m) of the pool: ");
    scanf("%f", &width);
    printf("Enter the height(m) of the pool: ");
    scanf("%f", &height);

    volume = length * width * height;

    calc(&volume);

    system("pause");
    return 0;
}