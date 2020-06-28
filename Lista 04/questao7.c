/*
Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
l� um n�mero inteiro entre 1 e 10 e imprime o n�mero
lido por extenso.
*/
#include<stdio.h>
int main()
{
	int numero;
	numero=0;
	printf("informe numero inteiro entre 1 e 10 \n");
	scanf("%d",&numero);
	if(numero==1){
		printf("UM");
	}else if(numero==2){
		printf("DOIS");
	}else if(numero==3){
		printf("TRES");
	}else if(numero==4){
		printf("QUATRO");
	}else if(numero==5){
		printf("CINCO");
	}else if(numero==6){
		printf("SEIS");
	}else if(numero==7){
		printf("SETE");
	}else if(numero==8){
		printf("OITO");
	}else if(numero==9){
		printf("NOVE");
	}else if (numero==10){
		printf("DEZ");
	}
	printf("\n\n");


	system("pause");
	return(0);
}
