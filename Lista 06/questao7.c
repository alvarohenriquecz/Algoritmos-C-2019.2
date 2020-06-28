/*Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
le um n�mero inteiro N e imprime todos os termos da
s�rie de Fibonacci que s�o menores ou iguais a N.

*/
#include<stdio.h>
int main()
{
int n;
n=0;
printf("informe um numero inteiro: \n");
scanf("%d",&n);
int enesimo,ant1,ant2;
enesimo=1;
ant1=1;
ant2=0;
int i,j;
if(n>=3){
printf("0\n1\n");
for(i=3;i<=n;i++){
		ant1=enesimo;
		enesimo=ant2+enesimo;
		ant2=ant1;
		if(enesimo<=n && enesimo >=0){
			
			printf("%d \n",enesimo);
		}
		}
	}else if(n==2){
		printf(" 0 \n 1 \n 1 \n 2 \n");
	}else if(n==1){
		printf("o \n 1 \n 1 \n");
	}


	printf("\n\n");
	system("pause");
	return(0);
}



