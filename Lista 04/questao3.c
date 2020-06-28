/*
Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa: 
l� da entrada tr�s valores inteiros, verifica se os mesmos correspondem aos 
lados de um tri�ngulo v�lido e imprime o tipo do tri�ngulo (Escaleno,
Is�sceles ou Equil�tero). Caso os valores recebidos n�o correspondam a um tri�ngulo
v�lido, o programa informa que n�o � um triangulo.
*/
#include<stdio.h>
#include<math.h>
int main()
{
	//lados a,b e c de um triangulo
	
	int a,b,c;
	a=0;
	b=0;
	c=0;
	printf("informe a medida do lado a: \n");
	scanf("%d",&a);
	printf("informe a medida do lado b: \n");
	scanf("%d",&b);
	printf("informe a medida do lado c: \n");
	scanf("%d",&c);
	int soma1,soma2,soma3;
	soma1=a+b;
	soma2=b+c;
	soma3=a+c;
	//de acordo com a minha interpreta��o qualquer lado deve ser maior
	//do que a diferen�a dos outros dois
	int dif1,dif2,dif3;
	dif1=sqrt((a-b)*(a-b));
	dif2=sqrt((b-c)*(b-c));
	dif3=sqrt((a-c)*(a-c));
	//da diferen�a pode sair um numero negativo, por isso elevei ao 
	//quadrado e depois tirei a raiz
	if(c<soma1 && a<soma2 && b<soma3 && c>dif1 && a>dif2 && b>dif3){
		printf("triangulo valido \n");
		if(a==b && b==c){
			printf("e Equilatero \n");
		}else if(a==b && a!=c || b==c && b!=a || c==a && c!=b){
			printf("e Isosceles \n");
		}else if(a!=b && a!=c && b!=c){
			printf("e Escaleno \n");
		}
	}else{
		printf("Nao eh triangulo \n");
	}
	

	system("pause");
	return(0);
}
