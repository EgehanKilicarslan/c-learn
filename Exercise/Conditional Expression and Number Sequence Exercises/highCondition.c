#include <stdlib.h>
#include <stdio.h>
#define size 150

int main(){

    int no, high, condition, minhigh, minno;

    printf("Enter your students number: \n>> ");
    scanf("%d", &no);
    printf("Enter your students high: \n>> ");
    scanf("%d", &high);

    minhigh = abs(high-size);
    minno = no;

    while (no > 0)
    {
        printf("Enter your students number: \n>> ");
        scanf("%d", &no);
        printf("Enter your students high: \n>> ");
        scanf("%d", &high);

        if(abs(high-size) < minhigh){
            minhigh = abs(high-size);
            minno = no;
        }
    }

    printf("The student with the %d high is the closest to 150 is %d\n", high, minno);

    system("pause");
    return 0;
}