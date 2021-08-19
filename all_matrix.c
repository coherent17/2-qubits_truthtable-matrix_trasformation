#include <stdio.h>
#include <stdlib.h>
#define row 4
#define column 4

int **constructMatrix();
void initMatrix(int **);
void printMatrix(int **);
void allMatrix(int **);

int main(){
    int **transformMatrix=constructMatrix();
    initMatrix(transformMatrix);
    allMatrix(transformMatrix);
    return 0;
}

int **constructMatrix(){
    int **transformMatrix=NULL;
    transformMatrix = (int **)malloc(sizeof(int *) * row);
    for (int i = 0; i < row; i++){
        transformMatrix[i] = (int *)malloc(sizeof(int) * column);
    }
    return transformMatrix;
}

void initMatrix(int **transformMatrix){
    for (int i = 0; i < row;i++){
        for (int j = 0; j < column;j++){
            transformMatrix[i][j] = 0;
        }
    }
}

void printMatrix(int **transformMatrix){
    printf("\t%d %d %d %d\n", transformMatrix[0][0], transformMatrix[0][1], transformMatrix[0][2], transformMatrix[0][3]);
    printf("\t%d %d %d %d\n", transformMatrix[1][0], transformMatrix[1][1], transformMatrix[1][2], transformMatrix[1][3]);
    printf("\t%d %d %d %d\n", transformMatrix[2][0], transformMatrix[2][1], transformMatrix[2][2], transformMatrix[2][3]);
    printf("\t%d %d %d %d\n\n", transformMatrix[3][0], transformMatrix[3][1], transformMatrix[3][2], transformMatrix[3][3]);
}

void allMatrix(int **transformMatrix){
    for (int index_1 = 0; index_1 <= 1;index_1++){
        for (int index_2 = 0; index_2 <= 1;index_2++){
            for(int index_3 = 0; index_3 <= 1;index_3++){
                for(int index_4 = 0; index_4 <= 1;index_4++){
                    for(int index_5 = 0; index_5 <= 1;index_5++){
                        for(int index_6 = 0; index_6 <= 1;index_6++){
                            for(int index_7 = 0; index_7 <= 1;index_7++){
                                for(int index_8 = 0; index_8 <= 1;index_8++){
                                    for(int index_9 = 0; index_9 <= 1;index_9++){
                                        for(int index_10 = 0; index_10 <= 1;index_10++){
                                            for(int index_11 = 0; index_11 <= 1;index_11++){
                                                for(int index_12 = 0; index_12 <= 1;index_12++){
                                                    for(int index_13 = 0; index_13 <= 1;index_13++){
                                                        for(int index_14 = 0; index_14 <= 1;index_14++){
                                                            for(int index_15 = 0; index_15 <= 1;index_15++){
                                                                for(int index_16 = 0; index_16 <= 1;index_16++){
                                                                    transformMatrix[0][0] = index_1;
                                                                    transformMatrix[0][1] = index_2;
                                                                    transformMatrix[0][2] = index_3;
                                                                    transformMatrix[0][3] = index_4;

                                                                    transformMatrix[1][0] = index_5;
                                                                    transformMatrix[1][1] = index_6;
                                                                    transformMatrix[1][2] = index_7;
                                                                    transformMatrix[1][3] = index_8;

                                                                    transformMatrix[2][0] = index_9;
                                                                    transformMatrix[2][1] = index_10;
                                                                    transformMatrix[2][2] = index_11;
                                                                    transformMatrix[2][3] = index_12;

                                                                    transformMatrix[3][0] = index_13;
                                                                    transformMatrix[3][1] = index_14;
                                                                    transformMatrix[3][2] = index_15;
                                                                    transformMatrix[3][3] = index_16;

                                                                    printMatrix(transformMatrix);
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}