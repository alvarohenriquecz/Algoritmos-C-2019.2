/*Nome: Alvaro Henrique Alves de Lima Guedes
Curso: Engenharia de controle e automacao
Periodo: 2 periodo
Descri��o do programa:
ser� inserido 20 caracteres em um vetor e o programa ir� analisar se a palavrea ou frase � um pal�ndromo(pal�dromo � toda palavra ou frase que pode ser lida de tr�s pra frente com mesmo significado) .

*/
#include<stdio.h>
#include <string.h>
int main()
{
	char entrada[100], nor[100], inv[100], c;
    int i, tam;
    
    printf(" Palavra ou frase: ");
    scanf("%99[^\n]", entrada);
    
    tam = 0; 
    for(i=0; entrada[i] != '\0'; i++){
        c = toupper(entrada[i]); 
        if(c >= 'A' && c <= 'Z'){ 
            nor[tam] = c; 
            tam++; 
        }
    }
    nor[tam] = '\0'; 
    
    
    for(i=0; i<tam; i++)
        inv[tam-i-1] = nor[i];
    inv[tam] = '\0'; 
    
    printf(" Normal     %s\n Invertido  %s\n", nor, inv);
    
    if(strcmp(nor, inv) == 0)
        printf("eh palindromo \n");
    else
        printf(" nao eh palindromo \n");



	printf("\n\n");
	system("pause");
	return(0);
}



