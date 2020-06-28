/*Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
l� dois n�meros inteiros M e N e calcula o valor de M na potencia de N

*/
#include<stdio.h>
int main()
{
	int n,expo,i,n_elevado;
	n=0;
	expo=0;
	printf("informe um numero inteiro: \n");
	scanf("%d",&n);
	printf("a qual potencia %d esta sendo elevado? \n",n);
	scanf("%d",&expo);
	n_elevado=n;
	if(expo>1){
	for(i=expo;i>1;i--){
		n_elevado=n_elevado*n;
	}printf("%d na potencia %d eh igual a %d \n",n,expo,n_elevado);
	}else if(expo==1){
		printf("%d na potencia %d eh igual a %d \n",n,expo,n);
	}else if(expo==0){
		printf("%d na potencia %d eh igual a 1 \n",n,expo);
	}
	
	
	
	printf("\n\n");
	system("pause");
	return(0);
}
