/*Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
simula uma vota��o.

*/
#include<stdio.h>
int main()
{
	int i;
	int jo,ze,ma,ana,n,nulo;
	jo=0;
	ze=0;
	ma=0;
	ana=0;
	nulo=0;
	
	float perc1,perc2,perc3,perc4,perc5;
	for(i=0;i<20;i++){
		n=0;
		printf("digite \n\n");
		printf("(1) para Joao Borracheiro \n");
		printf("(2) para Ze do caminhao \n");
		printf("(3) para Maria da bodega \n");
		printf("(4) para Ana \n");
		printf("(0) para NULO \n");
		printf(":");
		scanf("%d",&n);
		if(n==1){
			jo++;
		}else if(n==2){
			ze++;
		}else if(n==3){
			ma++;
		}else if(n==4){
			ana++;
		}else if (n==0){
			nulo++;
		}
		
	}
	perc1=(jo*100)/20;
	perc2=(ze*100)/20;
	perc3=(ma*100)/20;
	perc4=(ana*100)/20;
	perc5=(nulo*100)/20;
	
	printf("Joao Borracheiro: %.2f porcento dos votos \n",perc1);
	printf("Ze do caminhao: %.2f porcento dos votos \n",perc2);
	printf("Maria da bodega: %.2f porcento dos votos \n",perc3);
	printf("Ana: %.2f porcento dos votos \n",perc4);
	printf("%.2f porcento dos votos nulos \n",perc5);
	
	


	printf("\n\n");
	system("pause");
	return(0);
}



