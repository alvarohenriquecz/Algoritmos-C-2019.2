/*Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
le um n�mero N e imprime os N primeiros n�meros
primos positivos.

*/
#include<stdio.h>
int main()
{
	int n;
	n=0;
	printf("informe um numero inteiro: \n");
	scanf("%d",&n);
	int i,j,k,tst;
	k=0;
	float tst2;
	i=1;
	printf("\n\n");
	while(k<n){
		tst=0;
		for(j=i;j>=1;j--){
		tst2=i%j;	
		if(tst2==0){
		tst=tst+1;
		    }
		}if(tst==2){
			printf("%d \n",i);
		 k=k+1;
	    	}
		i++;
	}
	



	printf("\n\n");
	system("pause");
	return(0);
}



