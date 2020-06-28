/*
Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
o programa recebe tr�s medidas e verifica se elas obedecem � condi��o de
exist�ncia do tri�ngulo, formando um tri�ngulo v�lido. Em caso afirmativo, imprime
"triangulo valido." e o seu per�metro. Caso contr�rio, imprime "triangulo invalido".
tal condi��o � que nenhum lado se maior que a soma dos outros 2 ou menor que sua diferen�a
*/
#include<stdio.h>
#include<math.h>
int main()
{
	//lados a,b e c de um triangulo
	
	float a,b,c;
	a=0;
	b=0;
	c=0;
	printf("informe a medida do lado a: \n");
	scanf("%f",&a);
	printf("informe a medida do lado b: \n");
	scanf("%f",&b);
	printf("informe a medida do lado c: \n");
	scanf("%f",&c);
	float soma1,soma2,soma3,perimet;
	perimet=a+b+c;
	soma1=a+b;
	soma2=b+c;
	soma3=a+c;
	//de acordo com a minha interpreta��o qualquer lado deve ser maior
	//do que a diferen�a dos outros dois
	float dif1,dif2,dif3;
	dif1=sqrt((a-b)*(a-b));
	dif2=sqrt((b-c)*(b-c));
	dif3=sqrt((a-c)*(a-c));
	//da diferen�a pode sair um numero negativo, por isso elevei ao 
	//quadrado e depois tirei a raiz
	if(c<soma1 && a<soma2 && b<soma3 && c>dif1 && a>dif2 && b>dif3){
		printf("triangulo valido. %.1f \n",perimet);
	}else{
		printf("triangulo invalido \n");
	}
	

	system("pause");
	return(0);
}
