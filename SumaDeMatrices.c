#include <stdio.h>

#define TAM 10

// Encabezado de funciones (prototipos)
void LlenarMatriz(int Matriz[TAM][TAM], int filas, int columnas);
void LlenarMatriz(int Matriz[TAM][TAM], int filas, int columnas);
void SumaDeMatrices(int A[TAM][TAM], int B[TAM][TAM], int C[TAM][TAM], int filas, int columnas);
void ImprimirMatrices(int Matriz[TAM][TAM], int filas, int columnas);

int main(int argc, char* argv[])
{
    // Declaración de matrices
    int MatrizA[TAM][TAM];
    int MatrizB[TAM][TAM];
    int MatrizC[TAM][TAM];
    
    int filas, columnas; 
    
    printf("Ingresa el numero de filas: ");
    scanf("%d", &filas);
    
    printf("Ingresa el numero de columnas: ");
    scanf("%d", &columnas);
    
    LlenarMatriz(MatrizA, filas, columnas); // Llamada a la funcion 
    LlenarMatriz(MatrizB, filas, columnas); // Llamada a la funcion
    
    SumaDeMatrices(MatrizA, MatrizB, MatrizC, filas, columnas); // Llamo a la funcion y le envio las 3 matrices, filas y columnas
    ImprimirMatrices(MatrizC, filas, columnas); // Imprime lo que la matriz C obtuvo en la funcion SumarMatrices
    
    return 0;
}

// Funcion para llenar las matrices
 void LlenarMatriz(int Matriz[TAM][TAM], int filas, int columnas)
{
    int i, j;
    
    printf("\nLlenando nueva matriz.\n");
    
    for(i = 0; i < filas; i++){ // Recorre toda la fila segun la iteracion 
        for(j = 0; j < columnas; j++){ // Recorre toda la columna segun la iteracion
            printf("Ingresa el valor de la posicion [%d][%d]: ", i + 1, j + 1); //El usuario ingresa el valor en la posicion designada segun la iteracion del bucle
            scanf("%d", &Matriz[i][j]);
        }
    }
}

// Funcion para sumar las matrices
void SumaDeMatrices(int A[TAM][TAM], int B[TAM][TAM], int C[TAM][TAM], int filas, int columnas)
{ 
    int i, j;
    for(i = 0; i < filas; i++){ // Recorre toda la fila segun la iteracion 
        for(j = 0; j < columnas; j++){ // Recorre toda la columna segun la iteracion
            C[i][j] = A[i][j] + B [i][j];
        }
    }
}

// Funcion para imprimir el resultado de la suma
void ImprimirMatrices(int Matriz[TAM][TAM], int filas, int columnas)
{ 
    int i, j;
    
    printf("\nEl resultado de la suma es: \n");
    for(i = 0; i < filas; i++){ // Recorre toda la fila segun la iteracion 
        for(j = 0; j < columnas; j++){ // Recorre toda la columna segun la iteracion
            printf("Matriz C en [%d][%d] = %d\n", i + 1, j + 1, Matriz[i][j]); // imprime la suma que corresponde a la posicion designada por la iteracion
        }
    }
}

