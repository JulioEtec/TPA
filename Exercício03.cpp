/* 
*Programa:Exercicio 3
*Fun��o:Calcular a �rea deum c�rculo
*Autor: Julio Cesar Vicentin Duarte
*Data:01/10/2019
*Data de Altera��o:15/10/2019
*/
#include <stdio.h>
#include <windows.h>
#include <locale.h>
	int main(){
	setlocale(LC_ALL, "Portuguese");
	const float pi = 3.1416;
	float raio = 0, area = 0; 
		printf("Informe o raio do c�rculo:");
		scanf("%f", &raio);

		area = pi*(raio*raio);
		
		printf("A area do c�ruclo �: %.2f \n", area );
		return 0;
	}
