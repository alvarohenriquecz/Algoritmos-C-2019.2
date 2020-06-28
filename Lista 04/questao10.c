/*
Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descricao do programa:
le o valor de um m�s e de um ano e verifica a quantidade de dias do m�s 
informado pelo usu�rio.
*/
#include<stdio.h>
int main()
{
	int ano;
	ano=0;
	int mes;
	mes=0;
	printf("informe o numero do mes: \n");
	scanf("%d",&mes);
	printf(" informe o ano : \n");
	scanf("%d",&ano);
	float r1,r2,r3;
	r1=ano%400;
	r2=ano%100;
	r3=ano%4;
	if(r1==0 || r2>0 && r3==0)
	{
		if(mes==1){
			printf("janeiro, 31 dias");
		}else if(mes==2){
			printf("fevereiro, 29 dias");
		}else if(mes==3){
			printf("marco, 31 dias");
		}else if(mes==4){
			printf("abril, 30 dias");
		}else if(mes==5){
			printf("maio, 31 dias");
		}else if(mes==6){
			printf("junho, 3o dias");
		}else if(mes==7){
			printf("julho, 31 dias");
		}else if(mes==8){
			printf("agosto, 31 dias");
		}else if(mes==9){
			printf("setembro, 30 dias");
		}else if(mes==10){
			printf("outubro, 31 dias");
		}else if(mes==11){
			printf("novembro, 30 dias");
		}else if(mes==12){
			printf("dezembro, 31 dias");
		}
		
	}else
	{
		if(mes==1){
			printf("janeiro, 31 dias");
		}else if(mes==2){
			printf("fevereiro, 28 dias");
		}else if(mes==3){
			printf("marco, 31 dias");
		}else if(mes==4){
			printf("abril, 30 dias");
		}else if(mes==5){
			printf("maio, 31 dias");
		}else if(mes==6){
			printf("junho, 3o dias");
		}else if(mes==7){
			printf("julho, 31 dias");
		}else if(mes==8){
			printf("agosto, 31 dias");
		}else if(mes==9){
			printf("setembro, 30 dias");
		}else if(mes==10){
			printf("outubro, 31 dias");
		}else if(mes==11){
			printf("novembro, 30 dias");
		}else if(mes==12){
			printf("dezembro, 31 dias");
		}
	
	}
	
	printf("\n\n");
	system("pause");
	return(0);
}
