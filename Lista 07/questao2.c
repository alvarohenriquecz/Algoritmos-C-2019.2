/*Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
ser� inserido 10 elementos em um vetor e o programa imprimir� os elementos na ordem inversa a inserida .
*/
#include<stdio.h> 
int main() { 	
int vetor[10]; 	
int i; 	
for (i=0;i<10;i++) 
{ 	
printf("digite um numero \n"); 	
scanf("%d",&vetor[i]); 
}
for (i=9;i>=0;i--)
{
printf("numero %d \n", vetor[i]);
}




	printf("\n\n");
	system("pause");
	return(0);
}



