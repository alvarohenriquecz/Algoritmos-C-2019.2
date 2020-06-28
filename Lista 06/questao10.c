/*Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
imprime os seis primeiros pares de n�meros primos
g�meos. Dois n�meros s�o chamados de primos g�meos se eles forem primos e a
diferen�a entre os dois for igual a 2. (Por exemplo, 11 e 13 s�o primos g�meos).

*/
#include<stdio.h>
int main()
{
	int i,j,k,t,q;
	q=0;
	int tst,tst2;
	float tst3,tst4;
	for(i=2;i<100;i++){
		tst=0;
		for(j=i;j>=1;j--){
			tst3=i%j;
			if(tst3==0){
				tst=tst+1;
			}
		}if(tst==2){
			for(k=j;k<100;k++){
				tst2=0;
				for(t=k;t>=1;t--){
					tst4=k%t;
					if(tst4==0){
						tst2=tst2+1;
					}
				}if(tst2==2){
					if(i-k==2 && q<6){
						printf("(%d,%d) \n",k,i);
						q++;
					}
				}
			}
		}
	}
	
	
	
	
	
	

	printf("\n\n");
	system("pause");
	return(0);
}



