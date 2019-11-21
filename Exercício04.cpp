/* 
*Programa:Exercicio 4
*Função:Apresentar o quadrado da soma de dois número
*Autor: Julio Cesar Vicentin Duarte
*Data:15/10/2019
*/
#include <stdio.h>
#include <windows.h>
#include <locale.h>
	int main(){
	setlocale(LC_ALL, "Portuguese");
	int soma = 0, n1 = 0, n2 = 0, n3 = 0;
	float quadrado = 0; 
		printf("Informe o primeiro valor:");
		scanf("%i", &n1);
		printf("Informe o segundo valor:");
		scanf("%i", &n2);
		printf("Informe o terceiro valor:");
		scanf("%i", &n3);
		soma = n1+n2+n3;
		quadrado= soma*soma;
		
		printf("O quadrado da soma dos número é: %.2f \n", quadrado );
		return 0;
	}
