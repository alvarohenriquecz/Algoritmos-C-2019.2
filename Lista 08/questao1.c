/*Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
le uma matriz quadrada de ordem 4 de n�meros inteiros
e imprima a matriz lida.

*/
#include<stdio.h>
int main()
{
	int matriz[4][4]={{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
	int i,j;
	for(i=0;i<4;i++)
	{
		printf("\n");
		for(j=0;j<4;j++)
		printf(" %d ", matriz[i][j]);
	}



	printf("\n\n");
	system("pause");
	return(0);
}



