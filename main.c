#include "function.h"
#include <stdio.h>

int main(){
    int **TruthTable = NULL;
    TruthTable = constructTruthTable();
    printTruthTable(TruthTable);
    return 0;
}

