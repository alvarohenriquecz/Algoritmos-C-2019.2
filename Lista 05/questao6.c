/*Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
l� um n�mero inteiro N e verifica se ele � um n�mero
primo.

*/
#include<stdio.h>
int main()
{
	int n;
	n=0;
	printf("informe um numero inteiro: \n");
	scanf("%d",&n);
	float tst1,tst2,tst3,tst4,tst5;
	tst1=n%2;
	tst2=n%3;
	tst3=n%5;
	tst4=n%7;
	tst5=n%11;
	if(tst1!=0 && tst2!=0 && tst3!=0 && tst4!=0 && tst5!=0){
		printf("%d eh um numero primo \n",n);
	}else{
		printf("%d nao eh um numero primo \n",n);
	}
	
	
	printf("\n\n");
	system("pause");
	return(0);
}
