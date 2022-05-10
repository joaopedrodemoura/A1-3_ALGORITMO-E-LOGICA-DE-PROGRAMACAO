/* A1-3 atividade 2
Disciplina   : Algoritmo e logica da programação]
Professor   : Kleyton Hoffmann
Autor(a)    : João Pedro De Moura De Souza
Data atual  : 11/05/2022
*/
#include <stdio.h>

int main(void)
{
  int temp;
  char s, n, situ, situ2;
  
  printf("\nO PACIENTE ESTA SE SENTINDO BEM?: ");
  scanf("%c" ,&situ);
  
  if ( situ == 's' )
   {
   printf("PACIENTE SALDAVEL!");
   }
  else if ( situ == 'n')
  {
    getchar();
    printf("PACIENTE TEM DOR?: ");
    scanf("%c" ,&situ2);
     if (situ2 == 's')
     {
       printf("PACIENTE DOENTE!\n");
     }  
      else if (situ2 == 'n');
     {
       printf("TEMPERATURA DO PACIENTE?: ");
       scanf("%d" ,&temp);
     } 
         if (temp <= 37)
         {
           printf("PACIENTE SALDAVEL!");
         }
         else if (temp > 37)
         {
           printf("PACIENTE DOENTE!");
         }
   }
  

  
  return 0;
}