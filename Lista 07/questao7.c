/*Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
ser� inserido 10 elementos em um vetor e dois numeros m e n que diram as posi�oes no vetor as quais seram invertidas .

*/
#include<stdio.h>
int main()
{
int vetor[10];
int m,n,i,mp,np;
m=0;
printf("informe 10 numeros inteiros sendo 2 deles entre 1 e 10 \n\n");
for(i=0;i<=9;i++){
	printf("informe um valor: \n");
	scanf("%d",&vetor[i]);
	if(vetor[i]<=10 && vetor[i] && m==0){
		m=vetor[i];
		mp=i;
		
	}else if(vetor[i]<=10 && vetor[i] && m!=0){
		n=vetor[i];
		np=i;
	}
}printf("vetor antes da inversao de M por N: \n\n");
for(i=0;i<=9;i++){
	printf("%d \n",vetor[i]);
}printf("vetor depois inversao de M por N: \n\n");
vetor[np]=m;
vetor[mp]=n;
for(i=0;i<=9;i++){
	printf("%d \n",vetor[i]);
}



	printf("\n\n");
	system("pause");
	return(0);
}



