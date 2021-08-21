#include <stdio.h>
#include "function.h"

int main(){
    int **TruthTable=constructTruthTable();
    printTruthTable(TruthTable);
    int **matrix=constructMatrix();
    matrix=findMatrix(TruthTable);
    printMatrix(matrix);
    return 0;
}

