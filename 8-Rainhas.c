#include <stdio.h>
#include <stdbool.h>

#define N 8  // Tamanho do tabuleiro

typedef int Tabuleiro[N][N];

void desenha_tab(Tabuleiro);
bool eh_seguro(Tabuleiro, int, int);
bool prob8Rainhas(Tabuleiro, int);

int main() {
  // Inicializa o tabuleiro vazio
  Tabuleiro tabuleiro = {0};

  if (prob8Rainhas(tabuleiro, 0)) {
    printf("Solução encontrada:\n");
    desenha_tab(tabuleiro);
  } else {
    printf("Não existe solução.\n");
  }

  return 0;
}

// Função para imprimir o tabuleiro
void desenha_tab(Tabuleiro tabuleiro) {
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      printf("%c ", tabuleiro[i][j] ? 'Q' : '.');
    }
    printf("\n");
  }
}

// Verifica se é seguro colocar uma rainha na posição (linha, coluna)
bool eh_seguro(Tabuleiro tabuleiro, int linha, int coluna) {
  for (int i = 0; i < coluna; ++i) {
    // Verifica a linha
    if (tabuleiro[linha][i]) return false;

    int diag_cima = linha - (coluna - i);
    int diag_baixo = linha + (coluna - i);

    // Verifica diagonal superior
    if (diag_cima >= 0 && tabuleiro[diag_cima][i]) return false;  
    // Verifica diagonal inferior
    if (diag_baixo < N && tabuleiro[diag_baixo][i]) return false;  
    }
  return true;
}

// Função recursiva para resolver o problema das 8 Rainhas
bool prob8Rainhas(Tabuleiro tabuleiro, int coluna) {
  // Caso base: todas as rainhas foram colocadas
  if (coluna >= N) return true;

  for (int i = 0; i < N; ++i) {
    if (eh_seguro(tabuleiro, i, coluna)) {
      tabuleiro[i][coluna] = 1;  // Coloca a rainha

      // Chamada recursiva
      if (prob8Rainhas(tabuleiro, coluna + 1)) return true;
      tabuleiro[i][coluna] = 0;  // Retrocede (backtracking)
    }
  }
  return false;  // Se nenhuma posição funcionar, retorna falso
}
