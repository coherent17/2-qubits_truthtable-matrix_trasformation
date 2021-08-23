CC = gcc
CFLAGS = -g -Wall

main: main.c TruthTable.o FindMatrix.o TensorProduct.o MatrixMultiplication.o
	$(CC) $(CFLAGS) main.c TruthTable.o FindMatrix.o TensorProduct.o MatrixMultiplication.o -o main

TruthTable.o: TruthTable.c
	$(CC) $(CFLAGS) -c TruthTable.c

FindMatrix.o: FindMatrix.c TensorProduct.o MatrixMultiplication.o
	$(CC) $(CFLAGS) -c FindMatrix.c  

TensorProduct.o: TensorProduct.c
	$(CC) $(CFLAGS) -c TensorProduct.c

MatrixMultiplication.o: MatrixMultiplication.c
	$(CC) $(CFLAGS) -c MatrixMultiplication.c

clean:
	rm *.o main