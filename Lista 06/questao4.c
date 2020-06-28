/*Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
le o nome, o sexo e a idade de um grupo de 20 pessoas e
calcula o percentual de mulheres que tem entre 18 e 21 anos.
*/
#include<stdio.h>
int main()
{
char name[20];
char sex[20];
int idad[20];
int muie;
muie=0;
int novinhas;
novinhas=0;
int i;
for(i=0;i<20;i++){
	printf("informe seu sexo com 'm' para masculino e 'f' para feminino: \n\n");
	scanf("%s",&sex[i]);
	printf("informe seu nome: \n\n");
	scanf("%s",&name[i]);
	printf("informe a sua idade: \n\n");
	scanf("%d",&idad[i]);
	
	if(sex[i]=='f'){
	muie=muie+1;
	if(idad[i]>=18 && idad[i]<=21){
	novinhas=novinhas+1;
	}	
	
	}
	
	}
	float novinhas_p_h;
	novinhas_p_h=(novinhas*100)/20;
	
	float novinhas_p_v;
	novinhas_p_v=(novinhas*100)/muie;
	printf("o percentual de jovens mulheres entre 18 e 21 em relacao ao numero total de pessoas eh de %.2f  \n",novinhas_p_h);
	printf("e o percentual de jovens mulheres entre 18 e 21 em relacao ao  total de mulheres eh de %.2f  \n",novinhas_p_v);





	printf("\n\n");
	system("pause");
	return(0);
}



