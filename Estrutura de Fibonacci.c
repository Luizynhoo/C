#include <stdio.h>

// Protótipos das funções
int fibonacci(int n);
int fibonacci_aux(int n);

int main() {
  // Imprime os dez primeiros números da sequência de Fibonacci
  for (int i = 0; i < 25; ++i) {
    printf("%d ", fibonacci(i));
  }

  return 0;
}

// Função principal para calcular Fibonacci
int fibonacci(int n) {
  if (n <= 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  } else {
    return fibonacci_aux(n - 1) + fibonacci_aux(n - 2);
  }
}

// Função auxiliar para calcular Fibonacci
int fibonacci_aux(int n) {
  if (n <= 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  } else {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}
