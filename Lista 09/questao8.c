/*Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
l� uma matriz quadrada de ordem 5 de n�meros reais e
a seguir le um n�mero inteiro N e determina a quantidade de n�meros pares
existente na linha N.

*/
#include<stdio.h>
const int ORDEM=5;
int main()
{
	int mat[ORDEM][ORDEM];
	int i, j;
	for(i=0; i<ORDEM; i++){
		for(j=0; j<ORDEM; j++){
			printf("Informe um numero:");
			scanf("%d", &mat[i][j]);
		}
	}
	
	printf("A matriz eh: \n");
	for(i=0; i<ORDEM; i++){
		for(j=0; j<ORDEM; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	int n;
	printf("Informe um n�mero N (entre 1 e 5):");
	scanf("%d", &n);
	int par=0;
	for(j=0; j<ORDEM; j++){
		if(mat[n-1][j]%2==0){
			printf("%d ", mat[n-1][j]);
		}
	}



	printf("\n\n");
	system("pause");
	return(0);
}



