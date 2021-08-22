#include <stdio.h>
#include "matrix.h"

int main(){
    int **TruthTable=constructTruthTable();
    int **matrix=findMatrix(TruthTable);
    printMatrix(matrix);
    return 0;
}

