/* 
*Programa:Exercicio 7
*Função: Calcular o aumento de um salário
*Autor: Julio Cesar Vicentin Duarte
*Data:15/10/2019
*/
#include <stdio.h>
#include <windows.h>
#include <locale.h>
	int main(){
	setlocale(LC_ALL, "Portuguese");
	float salario = 0, aumento = 0, novoSalario = 0;
		printf("Digite o salário atual:");
		scanf("%f", &salario);
		printf("Informe o percentual de aumento do salário:");
		scanf("%f", &aumento);
		novoSalario = salario+(salario*(aumento/100));
		
		printf("O novo salário é: R$%.2f \n", novoSalario );
		return 0;
	}
