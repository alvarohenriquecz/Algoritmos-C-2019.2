/*Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
l� um n�mero natural N e calcula o seu fatorial.
*/
#include<stdio.h>
int main()
{
	int n,i,fatorial;
	n=0;
	fatorial=1;
	printf("informe um numero natural(inteiro positivo): \n");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		fatorial=i*fatorial;
	}
	printf("o fatorial de %d corresponde a %d",n,fatorial);
	
	
	
	
	printf("\n\n");
	system("pause");
	return(0);
}
