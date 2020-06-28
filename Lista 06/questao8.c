/*Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
le um n�mero inteiro N e verifica se ele pertence � s�rie
de Fibonacci.

*/
#include<stdio.h>
int main()
{
	int n;
	n=0;
	printf("digite um numero inteiro: \n");
	scanf("%d",&n);
	int i;
	int ant1,ant2,enesimo;
	ant1=1;
	ant2=0;
	enesimo=1;
	
	if(n==1){
		printf("%d pertence",n);
	}else if(n==2){
		printf("%d pertence",n);
	}else if(n>=3){
		for(i=3;i<=n;i++){
		ant1=enesimo;
		enesimo=ant2+enesimo;
		ant2=ant1;
		if(enesimo==n && enesimo>=0){
		i=n;
		printf("%d pertence",n);
		}	
		}if(enesimo!=n){
		printf("%d nao pertence",n);
		}
	
	}



	printf("\n\n");
	system("pause");
	return(0);
}



