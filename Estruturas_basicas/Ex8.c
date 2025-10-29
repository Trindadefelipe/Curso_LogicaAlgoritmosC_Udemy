//Escreva um programa que pede ao usuário a quantidade de gols marcados por um jogador em uma temporada e verifica: Se fez mais de 10 gols, exibir "Excelente temporada!", Se fez entre 5 e 10 gols (inclusive), exibir "Boa temporada!", Se fez menos de 5 gols, exibir "Temporada abaixo do esperado."

#include <stdio.h>

int main(){
  int gols;

  printf("Digite a quantidade de gols do jogador na temporada: ");
  scanf("%d", &gols);

  if(gols > 10){
    printf("Excelente temporada! %d Gols!", gols);
  } else if (gols >= 5 && gols <= 10){
    printf("Boa temporada! %d Gols!", gols);
  } else {
    printf("Temporada abaixo do esperado! %d Gols!", gols);
  }

  return 0;

}
