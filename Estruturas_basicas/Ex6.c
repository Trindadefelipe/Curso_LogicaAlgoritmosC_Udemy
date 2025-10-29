//Um jogador recebe cartão vermelho se receber 2 cartões amarelos no jogo. Escreva um programa que verifica se um jogador será expulso, baseado na quantidade de cartões amarelos.

#include <stdio.h>

int main(){

  int cartao_amarelo;

  printf("Quantos cartoes amarelos o jogador recebeu?\n");
  scanf("%d", &cartao_amarelo);

  while(cartao_amarelo < 0 || cartao_amarelo > 2){
    printf("Quantidade de cartoes invalida!\n");
    printf("Quantos cartoes amarelos o jogador recebeu?\n");
    scanf("%d", &cartao_amarelo);
  }

  if(cartao_amarelo > 1){
    printf("Cartao vermelho!\nJogador expulso!");
  } else {
    printf("Segue o jogo!");
  }

  return 0;

}
