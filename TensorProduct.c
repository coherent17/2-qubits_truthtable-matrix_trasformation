#include <stdio.h>
#include <stdlib.h>

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