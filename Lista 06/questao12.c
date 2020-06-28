/*Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
le v�rias palavras e, para cada palavra lida, determine o
seu n�mero de letras. O processamento dever� ser encerrado quando forem lidas duas
palavras de cinco letras.

*/
#include<stdio.h>
int main()
{
	char pal[100];
	char carac;
	int i,j,k,t,q;
	j=0;
	k=0;
	
	while(k<2){
	
	do{
		carac=getchar();
		pal[j]=carac;
		j++;
	}while(carac!='\n');
	pal[j-1]='\0';
	q=0;
	for(t=j;t>=1;t--){
		q++;
		
	}if(q-1==5){
			k++;
		}
	printf("%d letras \n",q-1);
	j=0;
}

	printf("\n\n");
	system("pause");
	return(0);
}



