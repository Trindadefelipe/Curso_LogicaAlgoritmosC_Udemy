//Peça ao usuário para digitar o tempo jogado em minutos. Depois, converta esse valor para horas e minutos e exiba o resultado.

#include <stdio.h>

int main(){

  int minutos_totais;
  int hora, minutos_final;

  printf("Digite a quantidade de tempo jogado em minutos: ");
  scanf("%d", &minutos_totais);

  hora = minutos_totais / 60;
  minutos_final = minutos_totais % 60;
  
  printf("%d hora(s)\n", hora);
  printf("%d minutos\n", minutos_final);

  return 0;

}
