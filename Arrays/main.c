#include <stdio.h>
#include <stdlib.h>

int main()
{

    //First part

    /* int num[5] = {1,2,3,4,5};
    printf("%d", num[0]); */



    /* int num[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        num[i] = 2*i;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", num[i]);
    } */



    /* int num[5];

    for(int i = 0; i < 5; i++){
        printf("%d) Enter your number: ", i+1);
        scanf("%d", &num[i]);
    }

    for(int i = 0; i < 5; i++){
        printf("%d\n", num[i]);
    } */
    
    

    /* int i = 0;
    int num[5];

    while(i < 5){
        printf("%d) Enter your number: ", i+1);
        scanf("%d", &num[i]);
        i++;
    }
    
    i = 0;

    while(i < 5){
        printf("%d\n", num[i]);
        i++; 
    }*/




    //Second part

    /* int num[2][2];
    num[0][0] = 1;
    num[0][1] = 2;
    num[1][0] = 3;
    num[1][1] = 4;

    printf("%d\n", num[0][0]); */



    /* int mat[10][10];

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(i==j){
                mat[i][j] = 1;
            }
            else{
                mat[i][j] = 0;
            }
        }
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("%4d", mat[i][j]);
        }
        printf("\n");
    } */



    /* int mat1[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int mat2[3][4] = {{9,10,11,12},{5,6,7,8},{1,2,3,4}};
    int mat3[3][4];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("%4d", mat3[i][j]);
        }
        printf("\n");
    } */




    //Third part

    /* int mat1[3][2];
    int mat2[3][2];
    int array[2][3][2];

    printf("First Matrix\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            printf("Enter your number: ");
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Second Matrix\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            printf("Enter your number: ");
            scanf("%d", &mat2[i][j]);
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            array[0][i][j] = mat1[i][j];
            array[1][i][j] = mat2[i][j];
        }
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 2; k++){
                printf("array[%d][%d][%d] = %d\n", i, j , k, array[i][j][k]);
            }
        }
    } */



    /* int array[2][3][2];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 2; k++){
                printf("Enter your number: ");
                scanf("%d", &array[i][j][k]);
            }
        }
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 2; k++){
                printf("array[%d][%d][%d] = %d\n", i, j , k, array[i][j][k]);
            }
        }
    } */


    system("pause");
    return 0;
}