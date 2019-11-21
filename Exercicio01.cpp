/* 
*Programa:Exercicio 1
*Função:Calcular a área de um retângulo
*Autor: Julio Cesar Vicentin Duarte
*Data:01/10/2019
*/
#include <stdio.h>
#include <windows.h>
#include <locale.h>
	int main(){
	setlocale(LC_ALL, "Portuguese");
	int base = 0, altura = 0, area = 0;
		printf("Informe o valor da Base:");
		scanf("%i", &base);
		printf("Informe o valor da Altura:");
		scanf("%i", &altura);
		area = base * altura;
		
		printf("A area do retângulo é: %i \n", area );
		return 0;
	}
