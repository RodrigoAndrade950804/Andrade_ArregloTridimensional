#include <stdio.h>
int main(int argc, char const *argv[])
{
    // Inicializacion y lectura de variables
    int n, m, z;
    printf("Ingrese cuantas matrices: ");
    scanf("%d", &z);
    printf("Ingrese filas: ");
    scanf("%d", &n);
    printf("Ingrese columas: ");
    scanf("%d", &m);
    int Matriz[n][m];
    // Imprime titulo de la matriz
    printf("Matriz");
    // Se agrega estructuras
    printf("\n");
    for (int i = 0; i < z-1; i++)
    {        
        for (int i = 0; i < n; i++)
        {
            printf("\n");
            for (int j = 0; j < m; j++)
            {                   
                Matriz[i][j] = 0;
                printf("%d\t", Matriz[i][j]);
            }
        }
        printf("\nMatriz:" );
        printf("\n");
    }        
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < m; j++)
        {            
            Matriz[i][j] = 1;
            printf("%d\t", Matriz[i][j]);
        }
    }
    return 0;
}