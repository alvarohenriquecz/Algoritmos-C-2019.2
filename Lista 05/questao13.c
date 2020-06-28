/*Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
l� dois n�meros inteiros M e N e imprime todos os
n�meros primos existentes no intervalo [M, N].

*/
#include<stdio.h>
int main()
{
	int m,n,i;
	m=0;
	n=0;
	float tst1,tst2,tst3,tst4,tst5;
	tst1=n%2;
	tst2=n%3;
	tst3=n%5;
	tst4=n%7;
	tst5=n%11;
	printf("informe dois numeros inteiros: \n\n");
	scanf("%d" "%d",&m,&n);
	if(m>n){
		for(i=n;i<=m;i++){
		float tst1,tst2,tst3,tst4,tst5;
		tst1=i%2;
		tst2=i%3;
		tst3=i%5;
		tst4=i%7;
		tst5=i%11;
		if(tst1!=0 && tst2!=0 && tst3!=0 && tst4!=0 && tst5!=0 && i!=1){
		printf("%d\n\n",i);
		}else if(i==2){
			printf("%d \n\n",i);
		}else if(i==3){
			printf("%d \n\n",i);	
		}else if(i==5){
			printf("%d \n\n",i);
		}else if(i==7){
			printf("%d \n\n",i);
		}else if(i==11){
			printf("%d \n\n",i);
		}}
	}else if(n>m){
		for(i=m;i<=n;i++){
		float tst1,tst2,tst3,tst4,tst5;
		tst1=i%2;
		tst2=i%3;
		tst3=i%5;
		tst4=i%7;
		tst5=i%11;
		if(tst1!=0 && tst2!=0 && tst3!=0 && tst4!=0 && tst5!=0 && i!=1){
		printf("%d\n\n",i);
		}else if(i==2){
			printf("%d \n\n",i);
		}else if(i==3){
			printf("%d \n\n",i);	
		}else if(i==5){
			printf("%d \n\n",i);
		}else if(i==7){
			printf("%d \n\n",i);
		}else if(i==11){
			printf("%d \n\n",i);
		}	
		}
		}else{
		printf("intervalo invalido");
	}
	
	
	printf("\n\n");
	system("pause");
	return(0);
}
