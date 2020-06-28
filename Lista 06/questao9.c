/*Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
le dois n�meros inteiros M e N e calcula os N primeiros
n�meros primos maiores ou iguais a M.

*/
#include<stdio.h>
int main()
{
	int n;
	int m;
	n=0;
	m=0;
	int i,j,k,tst;
	k=0;

	
	float tst2;
	
	printf("informe um numero inteiro N: \n");
	scanf("%d",&n);
	printf("informe outro numero inteiro M: \n");
	scanf("%d",&m);
	j=m;
	
	while(k<n){
    tst=0;
    for(i=j;i>=1;i--){
    	tst2=j%i;
    	if (tst2==0){
    		tst=tst+1;
    		
		}
    	
	}if(tst==2){
		printf("%d \n",j);
		k=k+1;
	}
	j++;
   	
		
		
		
		
		
	}



	printf("\n\n");
	system("pause");
	return(0);
}



