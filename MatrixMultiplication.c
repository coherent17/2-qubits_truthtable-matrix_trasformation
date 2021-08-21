#include <stdio.h>
#include <stdlib.h>

int *matrixMultiply(int *array, int **matrix){
    int *result=malloc(sizeof(int)*4);
    result[0]=array[0]*(matrix[0][0]+matrix[1][0]+matrix[2][0]+matrix[3][0]);
    result[1]=array[1]*(matrix[0][1]+matrix[1][1]+matrix[2][1]+matrix[3][1]);
    result[2]=array[2]*(matrix[0][2]+matrix[1][2]+matrix[2][2]+matrix[3][2]);
    result[3]=array[3]*(matrix[0][3]+matrix[1][3]+matrix[2][3]+matrix[3][3]);
    return result;
}

int main(){
    int array[4]={1,0,1,0};

    int **matrix=NULL;
    matrix = (int **)malloc(sizeof(int *) * 4);
    for (int i = 0; i < 4; i++){
        matrix[i] = (int *)malloc(sizeof(int) * 4);
    }

    //initialize the matrix
    for (int i = 0; i < 4;i++){
        for (int j = 0; j < 4;j++){
            matrix[i][j] = 0;
        }
    }

    matrix[0][2]=1;
    matrix[3][0]=1;
    matrix[2][2]=1;
    
    int *result=matrixMultiply(array, matrix);
    printf("%d %d %d %d\n", result[0], result[1], result[2], result[3]);
    return 0;
}
/*
1  0 0 1 0  1 
0  0 0 0 0  0
1  0 0 1 0  2
0  1 0 0 0  0
*/