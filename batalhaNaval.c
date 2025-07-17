#include <stdio.h>

// Função para imprimir o tabuleiro
void imprimirTabuleiro(int tabuleiro[10][10])
{
  printf("   A B C D E F G H I J\n"); // Cabeçalho das colunas

  for (int i = 0; i < 10; i++)
  {
    printf("%2d ", i + 1); // Cabeçalho das linhas (1 a 10)
    for (int j = 0; j < 10; j++)
    {
      printf("%d ", tabuleiro[i][j]);
    }
    printf("\n");
  }
}

int main()
{
  int tabuleiro[10][10] = {
      {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};

  // Navios (representados por um array unidimensional para o comprimento)
  int navio3[3] = {3, 3, 3}; // Um navio de tamanho 3

  // Posicionar um navio na horizontal (ex: linha 3, coluna 3, 3 posições)
  int linhaNavioH = 3;  // Corresponde à linha 4 do tabuleiro
  int colunaNavioH = 3; // Corresponde à coluna D do tabuleiro
  for (int i = 0; i < 3; i++)
  {
    if (colunaNavioH + i < 10)
    { // Garante que não saia do tabuleiro
      tabuleiro[linhaNavioH][colunaNavioH + i] = navio3[i];
    }
  }

  // Posicionar outro navio na vertical
  int linhaNavioV = 6;  // Corresponde à linha 7 do tabuleiro
  int colunaNavioV = 8; // Corresponde à coluna I do tabuleiro
  for (int i = 0; i < 3; i++)
  {
    if (linhaNavioV + i < 10)
    { // Garante que não saia do tabuleiro
      tabuleiro[linhaNavioV + i][colunaNavioV] = navio3[i];
    }
  }

  // Imprimir o tabuleiro
  imprimirTabuleiro(tabuleiro);

  return 0;
}