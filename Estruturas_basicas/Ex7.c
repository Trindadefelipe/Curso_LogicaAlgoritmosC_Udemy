//Escreva um programa que solicita ao usuário a idade de um jogador e verifica se ele pode jogar na categoria Sub-20 (jogadores com 20 anos ou menos). Se for mais velho, ele deve jogar na categoria profissional.

#include <stdio.h>

int main(){

  int idade;

  printf("Digite a idade do jogador: ");
  scanf("%d", &idade);

  while(idade < 5 || idade > 50){
    printf("Idade digitada nao liberada para jogar campeonato!\n");
    printf("Digite uma idade valida do jogador: ");
    scanf("%d", &idade);
  } 

  if(idade <= 20 && idade >= 16 ){
    printf("Jogador escalado para a categoria sub-20!");
  } else {
    printf("Jogador deve jogar na categoria profissional ou outra!");
  }

  return 0;

}
