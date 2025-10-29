//Escreva um programa que solicita ao usuário:
//A idade do jogador.
//A quantidade de gols marcados.
//O programa deve classificar o jogador nas seguintes categorias:
//✅ Se tem até 20 anos e fez mais de 10 gols: "Jovem talento promissor!"
//✅ Se tem até 20 anos e fez 10 gols ou menos: "Jovem em desenvolvimento."
//✅ Se tem mais de 20 anos e fez mais de 15 gols: "Jogador experiente em grande fase!"
//✅ Se tem mais de 20 anos e fez 15 gols ou menos: "Estevão"

#include <stdio.h>

int main(){
  int idade, gols_marcados;

  printf("Digite a idade do jogador: ");
  scanf("%d", &idade);
  printf("Digite a quantidade de gols marcados pelo jogador: ");
  scanf("%d", &gols_marcados);

  if(idade <= 20 && gols_marcados > 10){
    printf("Jovem talento promissor!");
  }
  if(idade <= 20 && gols_marcados <= 10){
    printf("Jovem em desenvolvimento!");
  }
  if(idade > 20 && gols_marcados > 15){
    printf("Jovem experiente em grande fase!");
  }
  if(idade > 20 && gols_marcados <= 15){
    printf("Estevao!");
  }

  return 0;

}
