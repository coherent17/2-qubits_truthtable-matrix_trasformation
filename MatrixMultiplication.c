#include <stdlib.h>

int *matrixMultiply(int *array, int **matrix){
    int *result=malloc(sizeof(int)*4);
    result[0]=matrix[0][0]*array[0]+matrix[0][1]*array[1]+matrix[0][2]*array[2]+matrix[0][3]*array[3];
    result[1]=matrix[1][0]*array[0]+matrix[1][1]*array[1]+matrix[1][2]*array[2]+matrix[1][3]*array[3];
    result[2]=matrix[2][0]*array[0]+matrix[2][1]*array[1]+matrix[2][2]*array[2]+matrix[2][3]*array[3];
    result[3]=matrix[3][0]*array[0]+matrix[3][1]*array[1]+matrix[3][2]*array[2]+matrix[3][3]*array[3];
    return result;
}