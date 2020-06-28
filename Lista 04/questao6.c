/*
Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa: 
l� os valores dos tr�s �ngulos internos de um tri�ngulo e
verifica se o mesmo � um tri�ngulo ret�ngulo.
*/
#include<stdio.h>
int main()
{
	float an1,an2,an3;
	an1=0;
	an2=0;
	an3=0;
	printf("informe um angulo \n");
	scanf("%f",&an1);
	printf("informe outro angulo \n");
	scanf("%f",&an2);
	printf("informe mais um angulo \n");
	scanf("%f",&an3);
	float soma;
	soma=an1+an2+an3;
	if(soma>180 || soma<180){
		printf("de acordo com os angulos informados a figura nao representa um triangulo \n");
	}else if(soma==180 && an1==90 || an2==90 || an3==90){
		printf("eh um triangulo retangulo \n");
	}else{
		printf("nao eh um triangulo retangulo \n");
	}


	system("pause");
	return(0);
}
