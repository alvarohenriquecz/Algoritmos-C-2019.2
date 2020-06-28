/*Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
l� uma matriz quadrada de ordem 5 de n�meros reais e a
seguir le um n�mero inteiro N entre 1 e 5 e calcula a soma de todos os elementos
da linha N.

*/
#include<stdio.h>
const int ordem=5;
int main()
{
	float matriz[ordem][ordem];
	int i,j;
	int n;
	int soma;
	for(i=0;i<ordem;i++)
	{
		for(j=0;j<ordem;j++)
		{
			printf("Digite o elemento %d %d \n", i,j);
			scanf("%f", &matriz[i][j]);
		}
	}
	puts("Digite um valor para n entre 1 e 5:");
	scanf("%d", &n);
	i=n;
	for(j=0;j<ordem;j++)
	{
		soma+=matriz[i][j];
	}
	printf("A soma eh %d", soma);



	printf("\n\n");
	system("pause");
	return(0);
}



