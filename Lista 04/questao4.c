/*
Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
 l� tr�s n�meros inteiros distintos e identifica o maior e o menor n�mero lido.
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
	printf("informe outro numero inteiro \n");
	scanf("%d",&n2);
	printf("informe mais um numero inteiro \n");
	scanf("%d",&n3);
	if(n1>n2 && n1>=n3 && n2<=n3 ){
		printf(" %d eh o maior e %d eh o menor \n",n1,n2);
	}else if(n2>n1 && n2>=n3 && n1<=n3){
		printf(" %d eh o maior e %d eh o menor \n",n2,n1);
	}else if(n2>=n1 && n2>n3 && n1>=n3){
		printf(" %d eh o maior e %d eh o menor \n",n2,n3);
	}else if(n1>=n2 && n1>n3 && n2>=n3 ){
		printf(" %d eh o maior e %d eh o menor \n",n1,n3);
	}else if(n3>n1 && n3>=n2 && n1<=n2){
		printf(" %d eh o maior e %d eh o menor \n",n3,n1);
	}else if(n3>=n1 && n3>n2 && n1>=n2){
		printf(" %d eh o maior e %d eh o menor \n",n3,n2);
	}
	

	system("pause");
	return(0);
}
