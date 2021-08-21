#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int **constructTruthTable(){
    //mallocate the 4*2 matrix to store the output qubits
    int row = 4;
    int column = 2;
    int **TruthTable = NULL;
    TruthTable = (int **)malloc(sizeof(int *) * row);
    for (int i = 0; i < row;i++){
        TruthTable[i] = (int *)malloc(sizeof(int) * column);
    }
    
    //write the matrix
    printf("Please enter the corresponding output:\n");
    printf("\t0 0: ");
    scanf("%d %d", &TruthTable[0][0], &TruthTable[0][1]);

    printf("\t0 1: ");
    scanf("%d %d", &TruthTable[1][0], &TruthTable[1][1]);
    
    printf("\t1 0: ");
    scanf("%d %d", &TruthTable[2][0], &TruthTable[2][1]);

    printf("\t1 1: ");
    scanf("%d %d", &TruthTable[3][0], &TruthTable[3][1]);

    return TruthTable;
}

void printTruthTable(int **TruthTable){
    printf("\n");
    printf("\t0 0: %d %d\n",TruthTable[0][0],TruthTable[0][1]);
    printf("\t0 1: %d %d\n",TruthTable[1][0],TruthTable[1][1]);
    printf("\t1 0: %d %d\n",TruthTable[2][0],TruthTable[2][1]);
    printf("\t1 1: %d %d\n",TruthTable[3][0],TruthTable[3][1]);
}

int *TensorProduct(int a, int b){
    int *result = NULL;
    result = malloc(sizeof(int) * 4);

    if(a==0 && b==0){
        result[0] = 1;
        result[1] = 0;
        result[2] = 0;
        result[3] = 0;
    }

    if(a==0 && b==1){
        result[0] = 0;
        result[1] = 1;
        result[2] = 0;
        result[3] = 0;
    }

    if(a==1 && b==0){
        result[0] = 0;
        result[1] = 0;
        result[2] = 1;
        result[3] = 0;
    }

    if(a==1 && b==1){
        result[0] = 0;
        result[1] = 0;
        result[2] = 0;
        result[3] = 1;
    }
    return result;
}

void printTensorProductResult(int *result){
    for(int i=0;i<4;i++){
        printf("%d ", result[i]);
    }
    printf("\n");
}

int *matrixMultiply(int *array, int **matrix){
    int *result=malloc(sizeof(int)*4);
    result[0]=array[0]*(matrix[0][0]+matrix[1][0]+matrix[2][0]+matrix[3][0]);
    result[1]=array[1]*(matrix[0][1]+matrix[1][1]+matrix[2][1]+matrix[3][1]);
    result[2]=array[2]*(matrix[0][2]+matrix[1][2]+matrix[2][2]+matrix[3][2]);
    result[3]=array[3]*(matrix[0][3]+matrix[1][3]+matrix[2][3]+matrix[3][3]);
    return result;
}

int **constructMatrix(){
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
    return matrix;
}

void printMatrix(int **matrix){
    printf("\t%d %d %d %d\n", matrix[0][0], matrix[0][1], matrix[0][2], matrix[0][3]);
    printf("\t%d %d %d %d\n", matrix[1][0], matrix[1][1], matrix[1][2], matrix[1][3]);
    printf("\t%d %d %d %d\n", matrix[2][0], matrix[2][1], matrix[2][2], matrix[2][3]);
    printf("\t%d %d %d %d\n\n", matrix[3][0], matrix[3][1], matrix[3][2], matrix[3][3]);
}

bool checkArray(int *array1, int *array2){
    bool flag=true;
    for(int i=0;i<4;i++){
        if(array1[i]!=array2[i]){
            flag=false;
            break;
        }
    }
    return flag;
}

int **findMatrix(int **TruthTable){
    //deal with input qubits tensorproduct
    int *input1=TensorProduct(0,0);
    int *input2=TensorProduct(0,1);
    int *input3=TensorProduct(1,0);
    int *input4=TensorProduct(1,1);

    //check the input tensor product result
    /*
    printTensorProductResult(input1);
    printTensorProductResult(input2);
    printTensorProductResult(input3);
    printTensorProductResult(input4);
    */

    //deal with output qubits tensorproduct
    int *output1=TensorProduct(TruthTable[0][0], TruthTable[0][1]);
    int *output2=TensorProduct(TruthTable[1][0], TruthTable[1][1]);
    int *output3=TensorProduct(TruthTable[2][0], TruthTable[2][1]);
    int *output4=TensorProduct(TruthTable[3][0], TruthTable[3][1]);

    //check the output tensor product result
    /*
    printTensorProductResult(output1);
    printTensorProductResult(output2);
    printTensorProductResult(output3);
    printTensorProductResult(output4);
    */

    //brute force to generate the wanted matrix
    int **matrix=constructMatrix();
    int count=0;
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
                                                                    matrix[0][0] = index_1;
                                                                    matrix[0][1] = index_2;
                                                                    matrix[0][2] = index_3;
                                                                    matrix[0][3] = index_4;

                                                                    matrix[1][0] = index_5;
                                                                    matrix[1][1] = index_6;
                                                                    matrix[1][2] = index_7;
                                                                    matrix[1][3] = index_8;

                                                                    matrix[2][0] = index_9;
                                                                    matrix[2][1] = index_10;
                                                                    matrix[2][2] = index_11;
                                                                    matrix[2][3] = index_12;

                                                                    matrix[3][0] = index_13;
                                                                    matrix[3][1] = index_14;
                                                                    matrix[3][2] = index_15;
                                                                    matrix[3][3] = index_16;

                                                                    count+=1;
                                                                    printf("%d\n", count);
                                                                    //printMatrix(matrix);

                                                                    bool check1 = checkArray(matrixMultiply(input1, matrix),output1);
                                                                    bool check2 = checkArray(matrixMultiply(input2, matrix),output2);
                                                                    bool check3 = checkArray(matrixMultiply(input3, matrix),output3);
                                                                    bool check4 = checkArray(matrixMultiply(input4, matrix),output4);
                                                                    
                                                                    printTensorProductResult(input1);
                                                                    printMatrix(matrix);
                                                                    printTensorProductResult(matrixMultiply(input1, matrix));
                                                                    printTensorProductResult(output1);

                                                                    printf("check1= %d\n", check1);


                                                                    
                                                                    if(check1==1 && check2==1 && check3==1 && check4==1){
                                                                        printf("hi\n");
                                                                        printMatrix(matrix);
                                                                        return matrix;
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
    return NULL;
}

int main(){
    int **TruthTable=constructTruthTable();
    int **matrix=findMatrix(TruthTable);
    printMatrix(matrix);
    return 0;
}