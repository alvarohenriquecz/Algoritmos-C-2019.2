/*Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
l� uma matriz quadrada de ordem 5 de n�meros reais e
a seguir le um n�mero inteiro N entre 1 e 5 e imprime os N primeiros elementos da
sua diagonal principal.

*/
#include<stdio.h>
int main()
{
	int ordem=5;
	float matriz[ordem][ordem];
	int i,j;
	int n;
    for(i=0;i<ordem;i++)
	{
		for(j=0;j<ordem;j++)
		{
			printf("Digite o elemento %d %d \n", i,j);
			scanf("%f", &matriz[i][j]);
		}
	}
	puts(" digite um valor para n entre 1 e 5:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf(" %.2f ", matriz[i][i]);
	}



	printf("\n\n");
	system("pause");
	return(0);
}



