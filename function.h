#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int **constructTruthTable();
void printTruthTable(int **);
int *TensorProduct(int, int);
void printTensorProductResult(int *);
int *matrixMultiply(int *, int **);
int **constructMatrix();
bool checkArray(int *, int *);
int **findMatrix(int **);