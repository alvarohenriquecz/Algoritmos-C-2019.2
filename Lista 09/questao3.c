/*Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
l� uma matriz quadrada de ordem 5 de n�meros reais e
determina o maior valor presente na diagonal principal.

*/
#include<stdio.h>
int main()
{
	int ordem=5;
	float matriz[ordem][ordem];
	int i,j;
	for(i=0;i<ordem;i++)
	{
		for(j=0;j<ordem;j++)
		{
			printf("Digite o elemento %d %d \n", i,j);
			scanf("%f", &matriz[i][j]);
		}
	}
	float maior=matriz[0][0];
	 for(i=0;i<ordem;i++)
	{
		for(j=0;j<ordem;j++)
		{
			if(i==j)
			{
			    if(matriz[i][j]>maior)
			    {
			    	maior=matriz[i][j];
				}
				
			}
		}
	}
	printf("maior: %.2f", maior);



	printf("\n\n");
	system("pause");
	return(0);
}



