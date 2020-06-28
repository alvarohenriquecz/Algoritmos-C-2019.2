/*Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
l� uma matriz quadrada de ordem 5 de n�meros reais e
calcula o valor da soma dos elementos de cada uma de suas linhas.

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
	
	printf("A matriz eh:");
	for(i=0; i<ORDEM; i++){
		for(j=0; j<ORDEM; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<ORDEM; i++){
		int soma= 0;
		for(j=0; j<ORDEM; j++){
			soma= soma + mat[i][j];
		}
		printf("\nA soma da linha %d eh %d", i, soma);
	}
		

	printf("\n\n");
	system("pause");
	return(0);
}



