//Crie um programa que peça o primeiro nome de um jogador, sua idade e a quantidade de gols que ele já fez na carreira. Em seguida, exiba essas informações na tela.

#include <stdio.h>

int main(){

  char nome[20];
  int idade, gols;

  printf("Digite o primeiro nome do jogador: ");
  scanf(" %s", &nome);
  printf("Digite a idade do jogador: ");
  scanf("%d", &idade);
  printf("Digite a quantidade de gols na carreira do jogador: ");
  scanf("%d", &gols);

  printf("Nome: %s \n", nome);
  printf("Idade: %d \n", idade);
  printf("Gols feitos na carreira: %d \n", gols);

  return 0;

}
