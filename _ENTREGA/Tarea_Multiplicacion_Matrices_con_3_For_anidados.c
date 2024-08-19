/*********************************************
*
* Autor: JUAN NOVOA 
* Fehca:  15 AGOSTO 2023 - 19 AGOSTO 2023
* Materia: SIS OPERATIVOS
* Tema: MEMORIA ACCESO OPTIMIZACIÓN
* Tópico: MULTIPLICIACION DE MATRICES CON FOR´S, 
* PARA LUEGO IMPLEMENTAR APUNTADORES Y COMPARAR
* UTILIZACIÓN DE MEMORIA, Y REDUCIR LA COMPLEJIDAD
*
*********************************************/

#include <stdio.h>
#include <stdlib.h>

void imprimirMatriz(int matriz[], int tamaño, int n) {
    for (int i = 0; i < tamaño; i++) {
        if (i % n == 0 && i != 0) {
            printf("\n");
        }
        printf("%d ", matriz[i]);
    }
    printf("\n\n");
}

void multiplicarMatrices(int matrizA[], int matrizB[], int matrizC[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrizC[i * n + j] = 0; // Inicializar el elemento C[i][j]
            for (int k = 0; k < n; k++) {
                matrizC[i * n + j] += matrizA[i * n + k] * matrizB[k * n + j];
            }
        }
    }
}

int main() {
    int n;
    
    // Solicitamos al usuario el tamaño de la matriz
    printf("Ingrese el tamaño de la matriz (n x n): ");
    scanf("%d", &n);

    int tamaño = n * n;
    int matrizA[tamaño];
    int matrizB[tamaño];
    int matrizC[tamaño];

    // Entrada de datos para matrizA
    printf("Ingrese los elementos de la matriz A:\n");
    for (int i = 0; i < tamaño; i++) {
        printf("matrizA[%d]: ", i);
        scanf("%d", &matrizA[i]);
    }

    // Entrada de datos para matrizB
    printf("Ingrese los elementos de la matriz B:\n");
    for (int i = 0; i < tamaño; i++) {
        printf("matrizB[%d]: ", i);
        scanf("%d", &matrizB[i]);
    }

    // Multiplicación de matrices
    multiplicarMatrices(matrizA, matrizB, matrizC, n);

    // Impresión de matrices
    printf("Matriz A:\n");
    imprimirMatriz(matrizA, tamaño, n);
    printf(".... fin de matrizA\n");

    printf("Matriz B:\n");
    imprimirMatriz(matrizB, tamaño, n);
    printf(".... fin de matrizB\n");

    printf("Matriz C (resultado de A * B):\n");
    imprimirMatriz(matrizC, tamaño, n);
    printf(".... fin de matrizC\n");

    return 0;
}
