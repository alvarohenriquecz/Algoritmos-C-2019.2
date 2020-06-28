/*
Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
 l� o peso e a altura de uma pessoa e verifica se ela est� dentro da faixa 
de peso adequada, ou se est� abaixo ou acima do peso. Caso a pessoa esteja
fora do peso adequado o programa informa quantos Kg ela deve ganhar
ou perder para ficar dentro da faixa adequada.
*/
#include<stdio.h>
int main()
{
	float altu,peso;
	altu=0;
	peso=0;
	printf("informe sua altura (em metros): \n");
	scanf("%f",&altu);
	printf("iforme seu peso (em quilogramas): \n");
	scanf("%f",&peso);
	float imc;
	imc=peso/(altu*altu);
	float p_final,a_ganhar;
	
	if(imc>=18 && imc<=25){
		printf("voce esta na faixa de peso adequada com IMC= %.2f \n",imc);
	}else if(imc<18){
		p_final=18*(altu*altu);
		a_ganhar=p_final-peso;
		printf("voce esta abaixo do peso e deve ganhar %.2f kg \n",a_ganhar);
		
	}else if(imc>25){
		p_final=25*(altu*altu);
		a_ganhar=peso-p_final;
		printf("voce esta acima do peso e deve perder %.2f kg \n",a_ganhar);
	}
	
	

	system("pause");
	return(0);
}
