# 2-qubits_truthtable-matrix_trasformation
find the related matrix to affect on the input

## Build the truthtable
Let the user to enter thier corresponding output of the input, so that we can construct the truth table

## Tensor product the input qubits and output qubits
Tensor product the input qubits and the output qubits, so that we transform the input and output into a four-length-array(for 2 qubits conditions)

## brute-force to find the related matrix -Time complexity: <img src="https://latex.codecogs.com/png.image?\dpi{100}&space;\bg_black&space;O(2^{2^n})" title="\bg_black O(2^{2^n})" />, n is the number of qubits in the truth table
According the input and output array, keep changing the matrix until the matrix satisfied all of the results of the tesor product

## return the related matrix


## How to use?
### Step 1:
```bash=
$ git clone https://github.com/coherent17/2-qubits_truthtable-matrix_trasformation
```

### Step 2:
```bash=
$ cd 2-qubits_truthtable-matrix_trasformation
```

### Step 3:
```bash=
$ make
```

### Step 4:
```bash=
$ ./main
```

### Step 5:
enter the corresponding state output of the four input states

### Step 6:
Get the Result! Finish!!
