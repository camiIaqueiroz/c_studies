comentários: '/*   */' ou '//' (só uma linha)

diretivas (include): '#'  <> (informam ao pré-processador da linguagem que ele deve incluir arquivos de cabeçalho no código quando for copilar. ex.: stdio.h 
(standart input/output: contem informações/declarações que sao usadas pelo compilador p/ copilar funcoes da biblioteca padrao de de entrada e saida de dados do programa
ex.: printf e scanf) e o stdlib.h  

void: tipo de retorno da função (vazio; função sem retorno, no ex. ele excuta a tarefa mas não retorna valor) 

\n "new line" : sequência de escape (utiliza quando você quer usar o caractere especial) 

todos os comandos devem ser finalizados com ;

no void main() não precisou por é definição de uma função.

main(): função principal "()" "main" CASE SENSITIVE 

{ : chave de abertura

-----------------------------------------------------------------------------------------------------------------------------------------------------


#include <stdio.h>
#include <stdlib.h>

void main ()
{
 printf("Mila");
} 
 
-----------------------------------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

void main ()

{

   int num1, num2, soma;
   printf("Digite o primeiro numero:\n");
   scanf("%d", &num1);
   printf("Digite o segundo numero:\n");
   scanf("%d", &num2);

   soma = num1 + num2;

   printf("Soma: %d\n", soma) ;
   
}
