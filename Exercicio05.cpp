/* 
*Programa:Exercicio 5
*Fun��o: Calcular o pre�o de um terreno
*Autor: Julio Cesar Vicentin Duarte
*Data:15/10/2019
*/
#include <stdio.h>
#include <windows.h>
#include <locale.h>
	int main(){
	setlocale(LC_ALL, "Portuguese");
	int frente = 0, lado = 0;
	float preco = 0, area = 0, valorFinal;
		printf("Informe a medida da frente do terreno:");
		scanf("%i", &frente);
		printf("Informe a medida de um dos lados do terreno:");
		scanf("%i", &lado);
		printf("Informe o valor do pre�o por metro quadrado do terreno:");
		scanf("%f", &preco);
		area = lado*frente;
		valorFinal = area*preco;
		
		printf("O pre�o total desse terreno �: R$%.2f \n", valorFinal );
		return 0;
	}
