/*Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
 l� um n�mero inteiro N e imprime o en�simo termo da s�rie de Fibonacci.

*/
#include<stdio.h>
int main()
{
	int n;
	n=0;
	printf("digite um numero inteiro(a posi�ao): \n");
	scanf("%d",&n);
	int i;
	int ant1,ant2,enesimo;
	ant1=1;
	ant2=0;
	enesimo=1;
	
	if(n==1){
		printf("O termo de posicao %d na sequencia de fibonacci corresponde a 0",n);
	}else if(n==2){
		printf("O termo de posicao %d na sequencia de fibonacci corresponde a 1",n);
	}else if(n>=3){
		for(i=3;i<=n;i++){
		//o anterior 1 pega o valor do enesimo
		ant1=enesimo;
		//o enesimo muda de valor com o anterior 2 e seu valor anterior
		enesimo=ant2+enesimo;
		//o anterior 2 pega o valor do anterio 1
		ant2=ant1;
		//quando a repeti��o come�ar outra vez o enesimo se tornara anterior
		//se tornara o anterior 1 e depois de um novo enesimo teremos o anterior 2
		
		}
	printf("%d \n\n",enesimo);	
	}
	
	
	printf("\n\n");
	system("pause");
	return(0);
}
