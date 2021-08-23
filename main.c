#include <stdio.h>
#include "TruthTable.h"
#include "FindMatrix.h"

int main(){
    int **TruthTable=constructTruthTable();
    int **matrix=findMatrix(TruthTable);
    printMatrix(matrix);
    return 0;
}

