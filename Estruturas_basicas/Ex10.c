//Escreva um programa que solicita ao usuário:
//A capacidade total do estádio.
//A quantidade de torcedores presentes no jogo.
//Com base na taxa de ocupação do estádio, o programa deve classificar a partida da seguinte forma:
//✅ Se o estádio estiver com mais de 90% da capacidade ocupada: "Lotado!"
//✅ Se estiver entre 70% e 90% (inclusive): "Ótima presença de público!"
//✅ Se estiver entre 50% e 70% (inclusive): "Público razoável."
//✅ Se estiver abaixo de 50%: "Morumbis"

#include <stdio.h>

int main(){

  int capacidade_estadio, capacidade_torcedores;
  float lotacao;

  printf("Digite a capacidade total de publico do estadio: ");
  scanf("%d", &capacidade_estadio);
  printf("Digite a quantidade de torcedores presentes no estadio: ");
  scanf("%d", &capacidade_torcedores);

  lotacao = (capacidade_torcedores * 100.0) / capacidade_estadio;

  if(lotacao > 90){
    printf("Lotado!\nMais de 90%% da capacidade total!");
  }
  else if(lotacao >= 70){
    printf("Otima presenca de publico!\nEntre 70%% e 90%% da capacidade total!");
  }
  else if(lotacao >= 50){
    printf("Publico razoavel!\nDe 50%% a 70%% da capacidade total!");
  } else {
    printf("Torcedores desacreditados!\nMenos de 50%% da capacidade total!");
  }

  return 0;

}
