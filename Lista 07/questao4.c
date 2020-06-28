/*Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
ser� inserido 10 elementos em um vetor e um numero que ser� ultilizado para que o programa possa imprimir todos os elementos do vetor com valor superior ao numero.

*/
#include<stdio.h>

int main()
{
int vetor[10]; 	
int i,num,j;


for (i=0;i<10;i++) 
{ 	
printf("digite um numero \n"); 	
scanf("%d",&vetor[i]); 
}
printf("digite um numero  \n");
scanf("%d",&num);

 for(i=0;i<10;i++) 
 {
if(num < vetor[i])
{
printf("os valores do vetor que sao maior que %d eh: %d \n",num,vetor[i]);
}
 }



	printf("\n\n");
	system("pause");
	return(0);
}



