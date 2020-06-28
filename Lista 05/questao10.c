/*Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
l� dois n�meros inteiros M e N e um n�mero inteiro X e
imprime todos os divisores exatos de X existentes no intervalo [M, N].

*/
#include<stdio.h>
int main()
{
	int x,m,n,i;
	x=0;
	m=0;
	n=0;
	printf("insira um numero inteiro: \n");
	scanf("%d",&x);
	printf("informe dois numeros inteiros para um intervalo: \n");
	scanf("%d" "%d",&m,&n);
	
	printf("\n\n");
	if(m>n){
	  for(i=n;i<=m;i++){
	  //verifica se � uma divis�o exata
	  float verific;
	  verific=x%i;
       if(verific==0){
	    printf("%d \n\n",i);
	}
	}
	}else if(n>m){
		
	  for(i=m;i<=n;i++){
	  //verifica se � uma divis�o exata
	  float verific;
	  verific=x%i;
	   if(verific==0){
	     printf("%d \n\n",i);
	}	
	}
	}
	
	printf("\n\n");
	system("pause");
	return(0);
}
