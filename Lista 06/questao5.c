/*Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
le 10 n�meros inteiros e, para cada n�mero lido, calcula o
seu fatorial.

*/
#include<stdio.h>
int main()
{
	int n[10];
	int i,j;
	int fatorial[10];
	for(i=0; i<10; i++){
		printf("informe um numero inteiro: \n");
		scanf("%d",&n[i]);
	}
	for(i=0; i<10; i++){
		fatorial[i]=1;
		for(j=n[i];j>=1;j--){
			fatorial[i]=j*fatorial[i];
		}
		printf(" o fatorial de %d eh %d \n\n",n[i],fatorial[i]);
	}



	printf("\n\n");
	system("pause");
	return(0);
}



