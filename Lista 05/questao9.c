/*Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
l� dois n�meros inteiros M e N e calcula a m�dia
aritm�tica dos n�meros do intervalo [M, N].

*/
#include<stdio.h>
int main()
{
	int m,n,i,soma;
	m=0;
	n=0;
	soma=0;
	float media;
	printf("informe dois numeros inteiros: \n");
	scanf("%d" "%d",&m,&n);
	if(m>n){
		for(i=n;i<=m;i++){
		soma=i+soma;	
		}
		media=soma/((m-n)+1);
		printf("a media do intervalo (%d,%d) eh %.1f \n",n,m,media);
	}else if(n>m){
		for(i=m;i<=n;i++){
		soma=i+soma;	
		}
		media=soma/((n-m)+1);
		printf("a media do intervalo (%d,%d) eh %.1f \n",m,n,media);
	}else{
		printf("%d",m);
	}
	//levando em conta que se trata de um intervalo fechado
	
	
	
	printf("\n\n");
	system("pause");
	return(0);
}
