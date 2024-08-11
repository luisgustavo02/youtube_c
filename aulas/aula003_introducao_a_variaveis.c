#include<stdio.h>

int main(){
	// ESTUDO DE VARIÁVEIS
	
	// VARIÁVEL INTEIRA
	int numeroInteiro = 25.943;
	
	printf("Variavel numeroInteiro: %d\n\n", numeroInteiro);
	
	// VARIÁVEL PONTO FLUTUANTE
	float numeroFlutuante = 3.14;
	
	printf("Variavel numeroFlutuante: %.2f\n\n", numeroFlutuante);
	
	// VARIÁVEL DOUBLE
	double numeroDouble = 3.141592653589793;
	
	printf("Variavel numeroDouble: %.15lf\n\n", numeroDouble);
	
	// VARIÁVEL CHAR
	char letra = 'M', numero = '7', simbolo = '+';
	
	printf("Variavel letra: %c\nVariavel numero: %c\nVariavel simbolo: %c", letra, numero, simbolo);
	
	return 0;
}
