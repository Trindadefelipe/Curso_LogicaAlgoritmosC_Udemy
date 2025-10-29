//Escreva um programa que receba o número total de gols de um jogador e a quantidade de partidas jogadas. Depois, calcule e exiba a média de gols por partida.

#include <stdio.h>

int main(){

  float gols, partidas;
  float media;

  printf("Digite a quantidade de gols do jogador: ");
  scanf("%f", &gols);
  printf("Digite a quantidade de jogos jogados pelo do jogador: ");
  scanf("%f", &partidas);

  media = gols / partidas;

  printf("Quantidade de gols: %.1f gols \n", gols);
  printf("Quantidade de partidas: %.1f partidas \n", partidas);
  printf("Media de gols por partida: %.1f gols \n", media);


  return 0;
}
