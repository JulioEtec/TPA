/* 
*Programa:Exercicio 7
*Fun��o: Calcular o aumento de um sal�rio
*Autor: Julio Cesar Vicentin Duarte
*Data:15/10/2019
*/
#include <stdio.h>
#include <windows.h>
#include <locale.h>
	int main(){
	setlocale(LC_ALL, "Portuguese");
	float salario = 0, aumento = 0, novoSalario = 0;
		printf("Digite o sal�rio atual:");
		scanf("%f", &salario);
		printf("Informe o percentual de aumento do sal�rio:");
		scanf("%f", &aumento);
		novoSalario = salario+(salario*(aumento/100));
		
		printf("O novo sal�rio �: R$%.2f \n", novoSalario );
		return 0;
	}
