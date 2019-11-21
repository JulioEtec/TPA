/* 
*Programa:Exercicio 5
*Função: Calcular o preço de um terreno
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
		printf("Informe o valor do preço por metro quadrado do terreno:");
		scanf("%f", &preco);
		area = lado*frente;
		valorFinal = area*preco;
		
		printf("O preço total desse terreno é: R$%.2f \n", valorFinal );
		return 0;
	}
