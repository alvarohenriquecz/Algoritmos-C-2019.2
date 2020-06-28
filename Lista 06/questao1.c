/*Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
le um n�mero inteiro N e imprima um triangulo, onde N
� o n�mero de elementos impressos na primeira linha.


*/
#include<stdio.h>
int main()
{
	int n;
	n=0;
	printf("digite um numero inteiro: \n");
	scanf("%d",&n);
	int i;
	for(i=n;i>=1;i--){
		printf(" *");
		if(i==1){
		n=n-i;
		i=n+1;
		printf("\n");
	}
	}
	
	
	printf("\n\n");
	system("pause");
	return(0);
}
