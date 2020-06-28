/*Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
ser� inserido 10 elementos em um vetor e um numero qualquer e o programa imprimira todas as posi�oes em que esse n�mero aparece no vetor se aparecer.

*/
#include<stdio.h>

int main()
{
int vetor[10]; 	
int z,i,n,j;


for (i=0;i<10;i++) 
{ 	
printf("digite um numero \n"); 	
scanf("%d",&vetor[i]); 
}
printf("digite um numero que vc quer saber a posicao  \n");
scanf("%d",&n);

 for(i=0;i<10;i++) 
 {
if(n==vetor[i])
{
printf("o elemento %d se encontra na posicao : %d \n",n,i);
}
else
{
z=z+1;
}
 }
 if(z==10)
 {
printf("nao existe elementos no vetor com o valor de %d \n",n);
 }



	printf("\n\n");
	system("pause");
	return(0);
}



