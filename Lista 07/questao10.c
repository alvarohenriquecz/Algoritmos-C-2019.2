/*Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:

*/
#include<stdio.h>
int main()
{
int n;
n=0;	
char b[10];

printf("digite um numero entre 0 e 255: \n");
scanf("%d",&n);

itoa(n,b,2); 

printf("\nO numero %d em binario e: %s",n,b);

	printf("\n\n");
	system("pause");
	return(0);
}



