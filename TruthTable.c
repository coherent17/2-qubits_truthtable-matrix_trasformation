#include <stdio.h>
#include <stdlib.h>

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

//testing driven code:
int main(){
    int **truthTable=NULL;
    truthTable=constructTruthTable();
    printTruthTable(truthTable);
    return 0;
}