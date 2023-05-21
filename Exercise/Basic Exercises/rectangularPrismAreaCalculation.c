#include <stdio.h>
#include <stdlib.h>

void calc(int *length, int *width, int *height, char *result){
    int floorArea = *length * *width;
    int wallArea = (*length * *height) * 2 + (*width * *height) * 2;
    int totalArea = floorArea + wallArea;
    int volume = *length * *width * *height;

    *result = printf("The floor area is %d\nThe wall area is %d\nThe total area is %d\nThe volume is %d.", floorArea, wallArea, totalArea, volume);
}

int main(){
    int length, width, height;
    char result[200];

    printf("Enter the length of the rectangular prism: ");
    scanf("%d", &length);
    printf("Enter the width of the rectangular prism: ");
    scanf("%d", &width);
    printf("Enter the height of the rectangular prism: ");
    scanf("%d", &height);

    calc(&length, &width, &height, &result[500]);
    result;
}