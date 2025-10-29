//Crie um programa que peça o número de vitórias, empates e derrotas de um time. Depois, calcule o número total de pontos, seguindo a regra: Vitória = 3 pontos,Empate = 1 ponto, Derrota = 0 pontos

#include <stdio.h>

int main(){

  int vitoria, empate, derrota, pontuacao = 0;

  printf("Digite o numero de vitorias: ");
  scanf("%d", &vitoria);
  printf("Digite o numero de empates: ");
  scanf("%d", &empate);
  printf("Digite o numero de derrotas: ");
  scanf("%d", &derrota);

  pontuacao = (vitoria * 3) + (empate * 1) + (derrota * 0);

  printf("Total de pontos no campeonato: %d pontos", pontuacao);

  return 0;

}
