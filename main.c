#include <stdio.h>

int main(){

    int linhas, colunas;
    int **matriz;
    
    scanf("%d %d", &linhas, &colunas);
    if (linhas <= 0 || colunas <= 0) {
        printf("[matriz vazia]\n");
        return 0;
    }

    matriz = (int **)malloc(linhas * sizeof(int *));
    
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
    }
    
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d", matriz[i][j]);
            if(j < colunas - 1)
                printf(" ");
        }
        printf("\n");
    }

    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
    matriz = NULL;

    return 0; 
}
