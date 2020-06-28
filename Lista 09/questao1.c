/*Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
l� uma matriz quadrada de ordem 5 de n�meros inteiros
e um inteiro N e verifica quantas vezes o n�mero N aparece dentro da matriz.

*/
#include<stdio.h>
int main()
{
	int ordem=2;
	int matriz[ordem][ordem];
	int i,j;
	int n;
	int contador;
    for(i=0;i<ordem;i++)
	{
		for(j=0;j<ordem;j++)
		{
			printf("Digite o elemento %d %d \n", i,j);
			scanf("%d", &matriz[i][j]);
		}
	}
	puts("Digite um valor para n: ");
	scanf("%d",&n);
    for(i=0;i<ordem;i++)
	{
		for(j=0;j<ordem;j++)
		{
			if(matriz[i][j]==n)
			{
				contador+=1;
			}
		}
	}
	printf("o n apareceu %d vezes",contador);



	printf("\n\n");
	system("pause");
	return(0);
}



