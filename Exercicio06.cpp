/* 
*Programa:Exercicio 5
*Fun��o: Calcular o valor de uma presta��o em atraso
*Autor: Julio Cesar Vicentin Duarte
*Data:15/10/2019
*/
#include <stdio.h>
#include <windows.h>
#include <locale.h>
	int main(){
	setlocale(LC_ALL, "Portuguese");
	int tempo = 0;
	float prestacao = 0, valor = 0, taxa = 0;
		printf("Informe o valor da presta��o:");
		scanf("%f", &valor);
		printf("Informe a taxa de juros:");
		scanf("%f", &taxa);
		printf("Informe o tempo de atraso em meses:");
		scanf("%i", &tempo);
		prestacao = (valor+(valor*(taxa/100)*tempo));
		
		printf("O pre�o final da presta��o �: R$%.2f \n", prestacao );
		return 0;
	}
