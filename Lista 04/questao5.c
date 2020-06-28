/*
Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
l� tr�s n�meros distintos e identifica o n�mero que n�o � nem o menor e 
nem o maior n�mero.
*/
#include<stdio.h>
int main()
{
	int n1,n2,n3;
	n1=0;
	n2=0;
	n3=0;
	printf("informe um numero inteiro \n");
	scanf("%d",&n1);
	printf("informe outro numero inteiro distinto do anterior \n");
	scanf("%d",&n2);
	printf("informe mais um numero inteiro distinto do anterior \n");
	scanf("%d",&n3);
	if(n1>n2 && n1>n3 && n2<n3 ){
		printf(" %d eh o intermediario \n",n3);
	}else if(n2>n1 && n2>n3 && n1<n3){
		printf(" %d eh o intermediario \n",n3);
	}else if(n2>n1 && n2>n3 && n1>n3){
		printf(" %d eh o intermediario \n",n1);
	}else if(n1>n2 && n1>n3 && n2>n3 ){
		printf(" %d eh o intermediario \n",n2);
	}else if(n3>n1 && n3>n2 && n1<n2){
		printf(" %d eh o intermediario \n",n2);
	}else if(n3>n1 && n3>n2 && n1>n2){
		printf(" %d eh o intermediario \n",n1);
	}
	

	system("pause");
	return(0);
}
