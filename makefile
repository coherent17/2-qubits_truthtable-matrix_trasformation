all:main.c TruthTable.c TensorProduct.c MatrixMultiplication.c FindMatrix.c
	gcc -g -Wall main.c TruthTable.c TensorProduct.c MatrixMultiplication.c FindMatrix.c -o matrix

clean:
	rm -f matrix