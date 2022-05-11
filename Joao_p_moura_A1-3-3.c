/* 
A1-3 atividade 3
Disciplina  : Algoritmo e logica da programação
Professor   : Kleyton Hoffmann
Autor(a)    : João Pedro De Moura De Souza
Data atual  : 11/05/2022
*/

#include <stdio.h>
#include <stdlib.h>

int limif, limsup, linha;
int opcao; 
int simprimo, nprimo, j, k;

int main(void) //consegui fazer só a metade prof, considera meio certo ai ksks

{
for ( opcao = 1; opcao != 2;)
{
 printf("\ninforme o valor do limite inferior do intervalo:");
  scanf("%d", &limif);
 printf("informe o valor do limite superior do intervalo:");
  scanf("%d" , &limsup);
  printf("informe quantos numeros deseja imprimir por linha:");
  scanf("%d", &linha);
  
  for(int i = limif; i<=limsup; i++)
{
  nprimo=0;
  
  for (int x = 1; x <=i; x++) 
{
  if(i % x == 0)
{
  nprimo++;
}
}
  if(nprimo==2)
{
  printf("%d; ",i);
  simprimo = 1;      
}
}
  if(simprimo == 0)
{
  printf("\nNao possui primos no intervalo");
}
  printf("\nDeseja digitar outro numero?\n\t 1-sim\t2-nao \n");
  scanf("%d", &opcao);
}
  if ( opcao == 2)
{
  return 0;
}
  return 0;
}