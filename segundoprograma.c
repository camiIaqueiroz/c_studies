#includ <stdio.h>

void main()
  
{
  
  printf("Tamanho de armazenamento para o tipo int: %d \n", sizeof(int))
  printf("Tamanho de armazenamento para o tipo short: %d \n", sizeof(short))  
  printf("Tamanho de armazenamento para o tipo long: %d \n", sizeof(long))
    
  }    

------------------------------------------------------------------------------------
  
  #include <stdio.h>
#include <stdlib.h>

void main ()

{
int idade;
float salario, valor;
idade = 25;


valor = 4500.50;
salario = valor;
printf("Idade; %d\n", idade);
printf("E o salario: %f\n", salario);


}
