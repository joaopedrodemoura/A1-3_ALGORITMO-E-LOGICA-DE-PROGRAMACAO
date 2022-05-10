/* A1-3 atividade 6
Disciplina  : Algoritmo e logica da programação
Professor   : Kleyton Hoffmann
Autor(a)    : João Pedro De Moura De Souza
Data atual  : 11/05/2022
*/

#include <stdio.h>

int x, y, nump;
int  opcao;

int main(void) 
{  
  
  for ( opcao = 1; opcao != 2;)
{
  printf("\nInforme um numero positivo: ");
  scanf("%d", &nump);

for (x = 1; x <= nump; x++) 
{
  for (y = 1; y <= x; y++) 
{
 printf ("%d ", x);
} 
{
 printf ("\n");
}
}
  printf("\nDeseja digitar outro numero?\n\t 1-sim\t2-nao \n");
  scanf("%d", &opcao);
}
  if ( opcao = 2)
{
  return 0;
}
  return 0;
}