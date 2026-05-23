#include <stdio.h>
#include <stdlib.h>

int *crea_vector(int n);
void inicia_vector(int *vector, int n);
void imprime_vector(int *vector, int n);

int main(int agrc, char *agrv[])
{
    // Apuntar al vector
    int *vector;

    // Tamaño
    int n;
    printf("De que tamaño: ");
    scanf("%d", &n);
    
    vector = crea_vector(n);
    inicia_vector(vector, n);
    imprime_vector(vector, n);
}

int *crea_vector(int n)
{
    int *ap;

    ap = (int*)malloc(sizeof(int)*n);
    if (ap == NULL)
    {
        printf("Error fatal de memoria\n");
        exit(0);
    }

    // Regresa 
    return (ap); 
}

void inicia_vector(int *vector, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        vector[i] = i;
    }
}

void imprime_vector(int *vector, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", vector[i]);
    }
}

