/*Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
l� dois n�meros inteiros M e N e calcula a soma de todos
os n�meros do intervalo [M, N].

*/
#include<stdio.h>
int main()
{
	int m,n,i,soma;
	m=0;
	n=0;
	soma=0;
	printf("informe dois numeros inteiros: \n");
	scanf("%d" "%d",&m,&n);
	if(m>n){
		for(i=n;i<=m;i++){
		soma=i+soma;	
		}
		printf("%d \n",soma);
	}else if(n>m){
		for(i=m;i<=n;i++){
		soma=i+soma;	
		}
		printf("%d \n",soma);
	}else{
		printf("%d",m);
	}
	//levando em conta que se trata de um intervalo fechado
	
	printf("\n\n");
	system("pause");
	return(0);
}
