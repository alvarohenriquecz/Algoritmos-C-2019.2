/*
Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa: 
l� dois operandos inteiros e um operador (+, -, *, /) e
aplica o operador lido aos dois operandos, na ordem em que os mesmos foram
digitados.
*/
#include<stdio.h>
#include<string.h>
int main()
{
	int n1,n2;
	n1=0;
	n2=0;
	char ope[90];
	
	printf("informe um numero inteiro:\n");
	scanf("%d""%s""%d",&n1,&ope,&n2);
	float result;
	
	if(strcmp(ope,"+")==0){
		result=n1+n2;
		printf("%d + %d = %.1f \n",n1,n2,result);
	}else if(strcmp(ope,"-")==0){
		result=n1-n2;
		printf("%d - %d = %.1f \n",n1,n2,result);
	}else if(strcmp(ope,"*")==0){
		result=n1*n2;
		printf("%d x %d = %.1f \n",n1,n2,result);
	}else if(strcmp(ope,"/")==0){
		result=n1/n2;
		printf("%d / %d = %.1f \n",n1,n2,result);
	}
	

	system("pause");
	return(0);
}
