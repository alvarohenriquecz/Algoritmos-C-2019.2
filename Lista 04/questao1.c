/*
Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descricao do programa:recebe tres numeros na entrada e calcula o somatorio
deles. O programa imprimi "plif" se este somatorio for divisivel por 3 ou "plof" se
for divisivel por 5. Se for divisivel por ambos, imprime "plifplof". Caso nao seja
divisivel por nenhum, imprime o somat�rio 
*/
#include<stdio.h>

int main()
{
	int n1,n2,n3;
	n1=0;
	n2=0;
	n3=0;
	printf("digite um numero: \n");
	scanf("%d",&n1);
	printf("digite outro numero: \n");
	scanf("%d",&n2);
	printf("digite mais um numero: \n");
	scanf("%d",&n3);
	int soma;
	soma=n1+n2+n3;
	int test1,test2;
	test1=soma%3;
	test2=soma%5;                         
	if(test1==0 && test2!=0){
		printf("plif \n");
	}else if(test2==0 && test1!=0){
		printf("plof \n");
	}else if(test1==0 && test2==0){
		printf("plifplof \n");
	}else{
		printf("%d",soma);
	}
	
	


	printf("\n\n");
	system("pause");
	return(0);
}
