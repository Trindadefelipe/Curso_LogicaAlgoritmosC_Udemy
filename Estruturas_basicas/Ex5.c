//Peça ao usuário os salários de dois jogadores de futebol e mostre a diferença entre eles.

#include <stdio.h>
#include <math.h>

int main(){

  double salario1, salario2, diferenca;

  printf("Digite o valor do primeiro salario: R$ ");
  scanf("%lf", &salario1);
  printf("Digite o valor do segundo salario: R$ ");
  scanf("%lf", &salario2);

  diferenca = salario1 - salario2;

  printf("A diferenca entre os salarios e de: R$ %.2lf", fabs(diferenca));


  return 0;

}
