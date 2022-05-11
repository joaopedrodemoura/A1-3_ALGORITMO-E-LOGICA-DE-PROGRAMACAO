/*
A1-3 atividade 1b
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
  char cate;
  float media, quantidade, soma, total;
  
  do
{
  printf("Informe a categoria: ");
  scanf("%c", &cate);
    if (cate != 'a' && cate != 'b' && cate != 'c')
{
    break;
}
  printf("Informe a quantidade: ");
  scanf("%f", &quantidade);
  getchar(); //limpar caracter inserido
      
  soma = soma + quantidade;
  total++;
  media = soma / total;
}
  while(cate == 'a' || cate == 'b' || cate == 'c');
{
  printf("A media dos produtos e %.2f", media);
}
return 0;
}