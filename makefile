all: matrix.out

CC = gcc
CFLAGS = -g -Wall

matrix.out: main.o TruthTable.o FindMatrix.o MatrixMultiplication.o TensorProduct.o
	$(CC) -o matrix.out main.o TruthTable.o FindMatrix.o MatrixMultiplication.o TensorProduct.o

main.o: TruthTable.o FindMatrix.o
	$(CC) $(CFLAGS) -c main.c
TruthTable.o: TruthTable.o
	$(CC) $(CFLAGS) -c TruthTable.c
FindMatrix.o: FindMatrix.o matrix.h
	$(CC) $(CFLAGS) -c FindMatrix.c
MatrixMultiplication.o: MatrixMultiplication.o
	$(CC) $(CFLAGS) -c MatrixMultiplication.c
TensorProduct.o: TensorProduct.o
	$(CC) $(CFLAGS) -c TensorProduct.c

clean:
	rm -f main.o TruthTable.o FindMatrix.o MatrixMultiplication.o TensorProduct.o