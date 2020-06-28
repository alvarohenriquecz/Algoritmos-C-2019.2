/*Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
le o peso e a altura de um grupo de 20 pessoas e calcula o
percentual de pessoas abaixo do peso, o percentual de pessoas acima do peso e o
percentual de pessoas que est�o dentro da faixa de peso adequada.


*/
#include<stdio.h>
int main()
{
	float altu[20],peso[20];
	int i,p_acima,p_abaixo,ideal;
	p_acima=0;
	p_abaixo=0;
	ideal=0;
	
	
	for(i=0;i<=19;i++){
	printf("informe sua altura (em metros): \n");
	scanf("%f",&altu[i]);
	printf("iforme seu peso (em quilogramas): \n");
	scanf("%f",&peso[i]);
	}
	for(i=0;i<=19;i++){
	float imc;
	imc=peso[i]/(altu[i]*altu[i]);
	if(imc<18){
		p_abaixo++;
	}else if(imc>25){
		p_acima++;
	}else{
		ideal++;
	}
	}
	float acim,abai,inde;
	acim=(p_acima*100)/20;
	abai=(p_abaixo*100)/20;
	inde= 100-(acim+abai);
	printf("o percentual de pessoas acima do peso eh de %.2f  , abaixo eh de %.2f  e no peso ideal de %.2f ", acim, abai, inde);
	
	

	printf("\n\n");
	system("pause");
	return(0);
}
