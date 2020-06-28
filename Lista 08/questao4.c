/*Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
 le uma matriz quadrada de ordem 5 de n�meros reais e
imprima todos os elementos que est�o acima e abaixo da diagonal principal

*/
#include<stdio.h>
int main()
{
	int ord;;
	ord=5;
	int matriz[ord][ord];
	int i,j;
	for(i=0;i<ord;i++)
	{
		for(j=0;j<ord;j++)
		{
			printf("Digite o elemento %d %d \n", i,j);
			scanf("%d", &matriz[i][j]);
		}
	}
	for(i=0;i<ord;i++)
	{
		for(j=0;j<ord;j++)
		{
			if(i!=j)
			{
				printf(" %d ", matriz[i][j]);
			}
		}
	}



	printf("\n\n");
	system("pause");
	return(0);
}



