/*Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
l� um n�mero inteiro N e imprime todos os seus divisores
exatos.
*/
#include<stdio.h>
int main()
{
	int n;
	n=0;
	printf("insira um numero inteiro: \n");
	scanf("%d",&n);
	//a variavel i vai servir mais um como contador
	int i;
	printf("\n\n");
	for(i=n;i>=1;i--){
		//verifica se � uma divis�o exata
		float verific;
		verific=n%i;
		if(verific==0){
			printf("%d \n\n",i);
		}
	}
	
	printf("\n\n");
	system("pause");
	return(0);
}
