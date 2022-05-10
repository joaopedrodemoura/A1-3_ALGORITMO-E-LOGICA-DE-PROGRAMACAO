/* A1-3 atividade 5
Disciplina  : Algoritmo e logica da programação
Professor   : Kleyton Hoffmann
Autor(a)    : João Pedro De Moura De Souza
Data atual  : 11/05/2022
*/
/* A1-3 atividade 5
Disciplina  : Algoritmo e logica da programação
Professor   : Kleyton Hoffmann
Autor(a)    : João Pedro De Moura De Souza
Data atual  : 11/05/2022
*/

int nmagico, digitado; //numero magico e numero digitado

int main(void)
{
printf("\nAdivinhe o numero mágico!\n");
nmagico = rand() % 10; // % 10 pra que o numero magico vá de 0 a 10 

while (nmagico != digitado) // sem o laço while ele nao repetiria ate o usuario acertar o numero magico
{
  printf("Digite o numero mágico: ");
  scanf("%d",&digitado);

if ( digitado < nmagico )
{
  printf("Errado, muito baixo!\n");
}
if ( digitado == nmagico ) 
 {
   printf("Certo! %d é o numero magico\n" ,nmagico);
 }
if ( digitado > nmagico)
 {
   printf("Errado, muito alto!\n");
 }
}
  return 0;
}