//1 - Crie um programa que peça o primeiro nome de um jogador, sua idade e a quantidade de gols que ele já fez na carreira. Em seguida, exiba essas informações na tela.

#include <stdio.h>

int main()
{
    int idade, gols;
    char nome[15];
    
    printf("Digite seu primeiro nome: \n");
    scanf(" %s", &nome);
    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    printf("Digite a quantidade de gols feitas na carreira: \n");
    scanf("%d", &gols);
    
    printf("Nome: %s \n", nome);
    printf("Idade: %d \n", idade);
    printf("Gols feitos na carreira: %d \n", gols);
    

    return 0;
}
