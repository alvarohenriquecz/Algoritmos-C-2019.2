/*Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
ser� inserido 10 elementos em um vetor e o programa imprimir� todos os elementos do vetor com o valor superior a m�dia aritimetica de todos os elementos .
*/
#include<stdio.h>

int main()
{
int vetor[10]; 	
int k,i,j,soma,rest;


for (i=0;i<10;i++) 
{ 	
printf("digite um numero \n"); 	
scanf("%d",&vetor[i]);
soma+=vetor[i]; 
}
rest=soma/10;

 for(i=0;i<10;i++) 
 {
if(rest < vetor[i])
{
printf("os valores do vetor que sao maior que %d eh: %d \n",rest,vetor[i]);
}
 }



	printf("\n\n");
	system("pause");
	return(0);
}



