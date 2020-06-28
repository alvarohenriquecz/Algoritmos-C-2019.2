/*Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
ser� inserido 10 elementos em um vetor e o programa ir� inverter a ordem de todos os elementos do vetor .

*/
#include<stdio.h>
int main()
{
char num[10];
int i, j, aux;
for (i=0;i<10;i++) 
{ 	
printf("digite um numero \n"); 	
scanf("%d",&num[i]); 
}
for (i=0; i < 5; i++) {
    j=10-i-1;
    aux = num[i];
    num[i] = num[j];
    num[j] = aux;

}
 
for (i=0; i<10; ++i) {
    printf("%d \n ", num[i]);
}


	printf("\n\n");
	system("pause");
	return(0);
}



