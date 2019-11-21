/* 
*Programa:Exercicio 3
*Função:Calcular a área deum círculo
*Autor: Julio Cesar Vicentin Duarte
*Data:01/10/2019
*Data de Alteração:15/10/2019
*/
#include <stdio.h>
#include <windows.h>
#include <locale.h>
	int main(){
	setlocale(LC_ALL, "Portuguese");
	const float pi = 3.1416;
	float raio = 0, area = 0; 
		printf("Informe o raio do círculo:");
		scanf("%f", &raio);

		area = pi*(raio*raio);
		
		printf("A area do círuclo é: %.2f \n", area );
		return 0;
	}
