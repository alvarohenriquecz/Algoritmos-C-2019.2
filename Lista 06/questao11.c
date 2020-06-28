/*Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
le um n�mero inteiro positivo N e imprime os N primeiros
n�meros perfeitos.

*/
#include<stdio.h>
int main()
{
	int n,k;
	printf("informe um numero inteiro positivo: \n");
	scanf("%d",&n);
	int i,j,tst;
	j=2;
	float tst2;
	k=0;
	printf("\n\n");
	while(k<n){
		tst=0;
	for(i=j-1;i>=1;i--){
		tst2=j%i;
		if(tst2==0){
			tst=tst+i;
			
		}
		
	}if(tst==j){
		k++;
		printf("%d \n",j);
	}
	j++;
		
		
		
		
		
		
		
		
	}



	printf("\n\n");
	system("pause");
	return(0);
}



