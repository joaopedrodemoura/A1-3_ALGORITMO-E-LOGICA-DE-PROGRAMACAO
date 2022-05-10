/* A1-3 atividade 4
Disciplina  : Algoritmo e logica da programação
Professor   : Kleyton Hoffmann
Autor(a)    : João Pedro De Moura De Souza
Data atual  : 11/05/2022
*/

#include <stdio.h>

int num1, num2, resto; //divisão inteira somente como int e num1 tava como float 

int main(void)
{
printf("Informe o primeiro valor: ");
scanf("%d", &num1);  //faltou & para que o programa salvasse o valor dos num
printf("Informe o segundo valor: ");
scanf("%d" , &num2);  
  
 if (num1 > num2)
{
  resto = num1 % num2;
}
  else if (num2 > num1)
{
  resto = num2 % num1;
}
 else if (num1 == 0 || num2 == 0)
{
  printf("Não é possivel realizar divisão por zero\n");
}
  
   printf("\tO resto da divisão é %d\n" ,resto); // o resto estava declarado como int e aqui imprimia um %f 

  return 0;
}
