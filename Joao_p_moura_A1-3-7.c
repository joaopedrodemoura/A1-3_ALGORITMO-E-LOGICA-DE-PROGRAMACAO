/* 
A1-3 atividade 7
Disciplina  : Algoritmo e logica da programação
Professor   : Kleyton Hoffmann
Autor(a)    : João Pedro De Moura De Souza
Data atual  : 11/05/2022
*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
int not100, not50, not20, not10, not5, not2; //notas 
int moeda1, opcao;
float quantidade, valor, vt, x, i, cent, real, mediac;
float valor1;
i = 0;
  
for ( opcao = 1; opcao != 2;) //para repetir se for opção do usuario 
{
do
{
  i++;
  printf("Informe a quantidade de um produto: ");
  scanf(" %f", &quantidade);
    if(quantidade < 0)
{
    break;
}
    else if(quantidade > 0)
{
   printf("Informe o valor unitario do produto: ");
   scanf(" %f", &valor);
  
  if(valor < 0)
{
  break;
}
  else if(valor > 0)
{
  vt = quantidade * valor;
  x = x + vt;
}
}
}
  while (quantidade != 0);

  printf("VALOR TOTAL DA COMPRA: R$ %.2f\n", x);

  i = i - 1;
  mediac = x / i;
  printf("VALOR MEDIO DA COMPRA: R$ %.2f", mediac);

  valor = x;

    not100 = valor/100;
    valor = valor - (not100*100);
    not50 = valor/50;
    valor = valor - (not50*50);
    not20 = valor/20;
    valor = valor - (not20*20);
    not10 = valor/10;
    valor = valor - (not10*10);
    not5 = valor/5;
    valor = valor - (not5*5);
    not2 = valor/2;
    valor = valor - (not2*2);
    moeda1 = (valor/1);
    valor = valor - (moeda1*1);

    cent = valor;
    real = x - cent;
    i= i-1;
  printf("\nO valor final e de %.0f reais e %.2f centavos", real, cent);

  printf("\nNotas de R$ 100,00: %d ", not100);
  printf("\nNotas de R$ 50,00: %d", not50);
  printf("\nNotas de R$ 20,00: %d", not20);
  printf("\nNotas de R$ 10,00: %d", not10);
  printf("\nNotas de R$ 5,00: %d", not5);
  printf("\nNotas de R$ 2,00: %d", not2);
  printf("\n\nMoedas de R$ 1,00: %d", moeda1);

  printf("\n\nDeseja repetir o programa?\n\t 1-sim\t2-nao \n");
  scanf("%d", &opcao);

  if ( opcao == 2)
  {
    return 0;
  }
  }
return 0;
}