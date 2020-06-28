/*Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
l� um n�mero inteiro N e verifica se ele � um n�mero
perfeito.

*/
#include<stdio.h>
int main()
{
	int n;
	n=0;
	printf("digite um numero inteiro: \n");
	scanf("%d",&n);
	int i,soma;
	soma=0;
	for(i=1;i<n;i++){
		float tst;
		tst=n%i;
		if(tst==0){
			soma=i+soma;
		}
	}
	if(soma==n){
		printf("%d eh um numero perfeito \n",n);
		
	}else{
		printf("%d nao eh um numero perfeito \n",n);
	}


	
	printf("\n\n");
	system("pause");
	return(0);
}
