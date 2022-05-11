/*
A1-3 atividade 1d
Disciplina  : Algoritmo e logica da programação
Professor   : Kleyton Hoffmann
Autor(a)    : João Pedro De Moura De Souza
Data atual  : 11/05/2022
*/
#include <stdio.h>
/*
Oque o código está implementando?: Ele Pede ao usuario digitar o numero de uma categoria e a quantidade desta categoria, para que o programa possa calcular a media dos valores informados.
*/
int main (void)
{
  char categoria;
  float media, quantidade, soma, total;
  
   do
{
  printf("Informe a categoria: ");
  scanf("%c", &categoria);
   if (categoria != 'a' && categoria != 'b' && categoria != 'c')
{
    break;
}
  printf("Informe a quantidade: ");
  scanf("%f", &quantidade);
  
    if (quantidade <= 0) // faz com que a garanta que a quantidade seja maior que 0 (alternativa c) e que nao seja calculada a media por 0 (alternativa d).
{ 
  printf("quantidade informada igual ou menor que 0");
  break;
}
  getchar(); //limpar caracter inserido
      
  soma = soma + quantidade;
  total++;
  media = soma / total;
}
  while(categoria == 'a' || categoria == 'b' || categoria == 'c');
{
  printf("\nA media dos produtos eh %.2f", media);
}
return 0;
}