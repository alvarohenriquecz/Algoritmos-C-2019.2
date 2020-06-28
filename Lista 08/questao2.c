/*Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
 le uma matriz quadrada de ordem 5 de n�meros reais e
calcula a sua matriz transposta.

*/
#include<stdio.h>
int main()
{
	int ord;
	ord=5;
	int matriz[ord][ord];
	int i,j;
	for(i=0;i<ord;i++)
	{
		for(j=0;j<ord;j++)
		{
			printf("Digite o elementro %d %d \n", i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	int matriz2[ord][ord];
	for(i=0;i<ord;i++)
	{
		for(j=0;j<ord;j++)
		{
			matriz2[j][i]=matriz[i][j];
		
		}
	}
    	for(i=0;i<ord;i++)
	{
		for(j=0;j<ord;j++)
		{
		  printf(" %d ", matriz2[i][j]);
		}
	}



	printf("\n\n");
	system("pause");
	return(0);
}



