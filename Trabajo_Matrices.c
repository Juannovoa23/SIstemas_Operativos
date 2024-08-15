/*********************************************
*
* Autor: JUAN NOVOA 
* Fehca:  15 AGOSTO 2023
* Materia: SIS OPERATIVOS
* Tema: MEMORIA , ACCESO 
* Tópico: MULTIPLICIACION DE MATRICES
*
*********************************************/


#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void printMatrixRecursively(int matrix[], int size, int index, int n) {
    // Caso base: Si hemos impreso todos los elementos de la matriz, terminamos.
    if (index >= size) {
        printf("\n\n");
        return;
    }

    // Imprimimos un salto de línea si estamos en el inicio de una nueva fila.
    if (index % n == 0 && index != 0) {
        printf("\n");
    }

    // Imprimimos el elemento actual.
    printf("%d ", matrix[index]);

    // Llamada recursiva al siguiente índice.
    printMatrixRecursively(matrix, size, index + 1, n);
}

int main() {
    int n = 3;
    int size = n * n;
    int mA[size];
    int mB[size];
    int mC[size];

    // Inicialización
    for (int i = 0; i < size; i++) {
        mA[i] = 2;
        mB[i] = 1;
        mC[i] = 0;
    }

    // Impresión de matrices usando la función recursiva
    printf("Matriz A:\n");
    printMatrixRecursively(mA, size, 0, n);
    printf(".... fin de mA\n");

    printf("Matriz B:\n");
    printMatrixRecursively(mB, size, 0, n);
    printf(".... fin de mB\n");

    printf("Matriz C:\n");
    printMatrixRecursively(mC, size, 0, n);
    printf(".... fin de mC\n");

    return 0;
}