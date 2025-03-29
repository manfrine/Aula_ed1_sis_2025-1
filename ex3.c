#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Fun��o para criar uma matriz n x n com valores aleat�rios entre 1 e 10
void criarMatriz(int n, int matriz[n][n]) {
    srand(time(NULL)); // Inicializa a semente para n�meros aleat�rios
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = rand() % 10 + 1; // Gera n�meros entre 1 e 10
        }
    }
}

// Fun��o para multiplicar os elementos da diagonal principal
int multiplicarDiagonalPrincipal(int n, int matriz[n][n]) {
    int resultado = 1;
    for (int i = 0; i < n; i++) {
        resultado *= matriz[i][i]; // Multiplica os elementos da diagonal
    }
    return resultado;
}

// Fun��o para exibir a matriz
void exibirMatriz(int n, int matriz[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;

    // Solicita ao usu�rio o tamanho da matriz
    printf("Digite o tamanho da matriz (n x n): ");
    scanf("%d", &n);

    // Declara a matriz
    int matriz[n][n];

    // Cria a matriz
    criarMatriz(n, matriz);

    // Exibe a matriz gerada
    printf("\nMatriz gerada:\n");
    exibirMatriz(n, matriz);

    // Multiplica os elementos da diagonal principal
    int resultado = multiplicarDiagonalPrincipal(n, matriz);

    // Exibe o resultado
    printf("\nO produto dos elementos da diagonal principal �: %d\n", resultado);

    return 0;
}
