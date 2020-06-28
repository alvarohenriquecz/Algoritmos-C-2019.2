/*Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
l� um n�mero inteiro positivo N e imprime os N primeiros
n�meros pares positivos.

*/
#include<stdio.h>
int main()
{
	int n;
	n=0;
	printf("insira um numero inteiro positivo: \n");
	scanf("%d",&n);
	//quantidade de numeros a serem apresentados
	int n_positivos;
	n_positivos=n*2;
	//a variavel i serve como contador
	int i;
	printf("\n\n");
	for(i=1;i<=n_positivos;i++){
		//armazena um valor que determina se o numero � par
		float verific;
		verific=i%2;
		if(verific==0){
			printf("%d",i);
		}else{
			printf("\n\n");
		}
	}
	
	
	printf("\n\n");
	system("pause");
	return(0);
}
