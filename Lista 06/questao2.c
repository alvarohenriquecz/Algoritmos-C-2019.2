/*Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
le um n�mero inteiro N e imprima um triangulo, onde N
� o n�mero de elementos impressos na ultima linha.


*/
#include <stdio.h>
int main(){
    int i,i2,n;
    n=0;
    printf("informe um numero inteiro: \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    	for(i2=1;i2<=i;i2++){
    		printf("*");
		}
		printf("\n");
	}
    
	printf("\n\n");
	system("pause");
	return(0);
}
