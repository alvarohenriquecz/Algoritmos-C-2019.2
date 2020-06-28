/*Nome:Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
ser� inserido 10 elementos em um vetor e um numero de 1 a 10 que dir� a posi�ao que o programa deve imprimir .

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
printf("digite um numero de 1 a 10 \n");
scanf("%d",&num);

 printf("vetor = %d\n", vetor[num]);



	printf("\n\n");
	system("pause");
	return(0);
}



