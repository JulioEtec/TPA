/* 
Programa:Exercicio 1
Função:Calcular a área de um retângulo
Autores: Julio Cesar Vicentin Duarte/Marllon Silva Araujo Coelho 
Data de criação: 27/11/2019
Data de Modificação: 04/12/2019
*/
#include <stdio.h>
#include <windows.h>
#include <locale.h>
	int main(){
	setlocale(LC_ALL, "Portuguese");
	char teatro[20][25];
	float ingresso = 1, soma = 0;
	int inicio = 0, reserva = 0, paraReserva, paraVenda, fileira = 0, cadeira = 0, venda, vendaMeia, paraVendaMeia = 1, contador = 0, contador2 = 0, cancela = 0;
		for(int a = 0; a < 20; a++){
			for(int j = 0; j < 25; j++){
					teatro[a][j] = 'D';
		}}
	int i, i2;
	printf("+-------------------------------------------------+ \n");
	printf("| 1. Informar valor do ingresso e tamanho da sala | \n");
	printf("| 2. Abrir um espetáculo                          | \n");
	printf("| 3. Reservar ou cancelar a reserva de um lugar   | \n");
	printf("| 4. Vender um lugar (inteira)                    | \n");
	printf("| 5. Vender um lugar (meia)                       | \n");
	printf("| 6. Verificar o mapa do teatro                   | \n");
	printf("| 7. Encerrar o espetáculo                        | \n");
	printf("| 8. Verificar parciais                           | \n");
	printf("+-------------------------------------------------+ \n");
	
	printf("Digite '1' caso deseje iniciar a criação de seu espetáculo: \n");
	scanf("%i", &inicio);
	
	if(inicio == 1){
	   	
		printf("Você escolheu uma sala com 500 lugares, deseja cobrar quanto pelo ingresso? \n R$: ");
		scanf("%f", &ingresso);
		
		while(ingresso <= 0){
			printf("Valor inválido!! \n");
			printf("Informe outro valor:");
			scanf("%f", &ingresso);
		}
		
		printf("Preço do ingresso definido para R$ %2.f com sucesso \n", ingresso);
		
		printf("Digite 1 para informar quais lugares foram reservados: \n");
			scanf("%i", &reserva);
			 if(reserva ==1){
				paraReserva = 1;
				
				for(int t = 0; t < 20; t++) {
					
					for(int b = 0; b < 25; b++){
						printf("+--");
						if(b == 24){
							printf("+ \n");
						}
					}                
					for(int j = 0; j < 25; j++){
						printf("| %c", teatro[t][j]);
						if(j == 24){
							printf("| %i \n", contador);
							contador++;
				}
		}
		}
				for(int p = 0; p < 25; p++){
					printf("+--");
					if(p == 24){
					printf("+ \n");
					for(int s = 0; s < 10; s++){
					printf("| %i", contador2);
					contador2++;
					if(contador2 > 9){
						for(int g = contador2; g < 25; g++){
						printf("|%i", contador2);
						contador2++;
						}
	}
		}
			printf("| \n ");
		}
	}
			contador=0;
			contador2=0;
							
			while(paraReserva == 1){

			printf("Informe qual cadeira foi reservada e em qual fileira(Sempre sendo 1 cadeira por vez) \n");
			printf("Fileira:");
				scanf("%i", &fileira);
			printf("Cadeira:");
				scanf("%i", &cadeira);
			while(teatro[fileira][cadeira] == 'R' or teatro[fileira][cadeira] == 'V' or teatro[fileira][cadeira] == 'v'){
					printf("Esse lugar ja está reservado, escolha outro \n");
					printf("Fileira:");
						scanf("%i", &fileira);
					printf("Cadeira:");
						scanf("%i", &cadeira);
					if(teatro[cadeira][fileira] == 'D'){
						teatro[fileira][cadeira] == 'R';
					}
				}
					teatro[fileira][cadeira] = 'R';
			
				fileira = 0;
				cadeira = 0;
			printf("Caso ja tenha inserido todas as cadeiras reservadas digite 2:");
				scanf("%i", &paraReserva);
				if(paraReserva != 2){
					paraReserva = 1;
				}
			}
	}
			for(int t = 0; t < 20; t++) {
					
					for(int b = 0; b < 25; b++){
						printf("+--");
						if(b == 24){
							printf("+ \n");
						}
					}                
					for(int j = 0; j < 25; j++){
						printf("| %c", teatro[t][j]);
						if(j == 24){
							printf("| %i \n", contador);
							contador++;
				}
		}
		}
				for(int p = 0; p < 25; p++){
					printf("+--");
					if(p == 24){
					printf("+ \n");
					for(int s = 0; s < 10; s++){
					printf("| %i", contador2);
					contador2++;
					if(contador2 > 9){
						for(int g = contador2; g < 25; g++){
						printf("|%i", contador2);
						contador2++;
						}
	}
		}
			printf("| \n ");
		}
	}
			contador=0;
			contador2=0;
			
			printf("Digite 1 para informar quais lugares foram vendidos: \n");
			scanf("%i", &venda);
			 if(venda == 1){
				paraVenda = 1;
				
				for(int t = 0; t < 20; t++) {
					
					for(int b = 0; b < 25; b++){
						printf("+--");
						if(b == 24){
							printf("+ \n");
						}
					}                
					for(int j = 0; j < 25; j++){
						printf("| %c", teatro[t][j]);
						if(j == 24){
							printf("| %i \n", contador);
							contador++;
				}
		}
		}
				for(int p = 0; p < 25; p++){
					printf("+--");
					if(p == 24){
					printf("+ \n");
					for(int s = 0; s < 10; s++){
					printf("| %i", contador2);
					contador2++;
					if(contador2 > 9){
						for(int g = contador2; g < 25; g++){
						printf("|%i", contador2);
						contador2++;
						}
	}
		}
			printf("| \n ");
		}
	}
			contador=0;
			contador2=0;
			
			while(paraVenda == 1){
				fileira = 0;
				cadeira = 0;
			printf("Informe qual cadeira foi vendida e em qual fileira(Sempre sendo 1 cadeira por vez) \n");
			printf("Fileira:");
				scanf("%i", &fileira);
			printf("Cadeira:");
				scanf("%i", &cadeira);

				
				while(teatro[fileira][cadeira] == 'R' or teatro[fileira][cadeira] == 'V'){
					printf("Esse lugar ja está reservado, escolha outro \n");
					printf("Fileira:");
						scanf("%i", &fileira);
					printf("Cadeira:");
						scanf("%i", &cadeira);
					if(teatro[cadeira][fileira] == 'D'){
						teatro[fileira][cadeira] == 'V';
					}
				}
					teatro[fileira][cadeira] = 'V';
			
				fileira = 0;
				cadeira = 0;
			
			printf("Caso ja tenha inserido todas as cadeiras reservadas digite 2:");
				scanf("%i", &paraVenda);
				if(paraVenda != 2){
					paraVenda = 1;
				}
			}
	}
			for(int t = 0; t < 20; t++) {
					
					for(int b = 0; b < 25; b++){
						printf("+--");
						if(b == 24){
							printf("+ \n");
						}
					}                
					for(int j = 0; j < 25; j++){
						printf("| %c", teatro[t][j]);
						if(j == 24){
							printf("| %i \n", contador);
							contador++;
				}
		}
		}
				for(int p = 0; p < 25; p++){
					printf("+--");
					if(p == 24){
					printf("+ \n");
					for(int s = 0; s < 10; s++){
					printf("| %i", contador2);
					contador2++;
					if(contador2 > 9){
						for(int g = contador2; g < 25; g++){
						printf("|%i", contador2);
						contador2++;
						}
	}
		}
			printf("| \n ");
		}
	}
			contador=0;
			contador2=0;
		printf("Digite 1 para informar quais lugares foram vendidos como meia entrada:: \n");
			scanf("%i", &vendaMeia);
			 if(vendaMeia == 1){
				paraVendaMeia = 1;
				
				for(int t = 0; t < 20; t++) {
					
					for(int b = 0; b < 25; b++){
						printf("+--");
						if(b == 24){
							printf("+ \n");
						}
					}                
					for(int j = 0; j < 25; j++){
						printf("| %c", teatro[t][j]);
						if(j == 24){
							printf("| %i \n", contador);
							contador++;
				}
		}
		}
				for(int p = 0; p < 25; p++){
					printf("+--");
					if(p == 24){
					printf("+ \n");
					for(int s = 0; s < 10; s++){
					printf("| %i", contador2);
					contador2++;
					if(contador2 > 9){
						for(int g = contador2; g < 25; g++){
						printf("|%i", contador2);
						contador2++;
						}
	}
		}
			printf("| \n ");
		}
	}
			contador=0;
			contador2=0;
			
			while(paraVendaMeia == 1){
				fileira = 0;
				cadeira = 0;
			printf("Informe qual cadeira foi vendida e em qual fileira(Sempre sendo 1 cadeira por vez) \n");
			printf("Fileira:");
				scanf("%i", &fileira);
			printf("Cadeira:");
				scanf("%i", &cadeira);

				
				while(teatro[fileira][cadeira] == 'R' or teatro[fileira][cadeira] == 'V' or teatro[fileira][cadeira] == 'v'){
					printf("Esse lugar ja está reservado, escolha outro \n");
					printf("Fileira:");
						scanf("%i", &fileira);
					printf("Cadeira:");
						scanf("%i", &cadeira);
					if(teatro[cadeira][fileira] == 'D'){
						teatro[fileira][cadeira] == 'v';
					}
				}
					teatro[fileira][cadeira] = 'v';
			
				fileira = 0;
				cadeira = 0;
			printf("Caso ja tenha inserido todas as cadeiras vendidas como meia entrada digite 2:");
				scanf("%i", &paraVendaMeia);
				if(paraVendaMeia != 2){
					paraVendaMeia = 1;
				}
			}
	}
			for(int t = 0; t < 20; t++) {
					
					for(int b = 0; b < 25; b++){
						printf("+--");
						if(b == 24){
							printf("+ \n");
						}
					}                
					for(int j = 0; j < 25; j++){
						printf("| %c", teatro[t][j]);
						if(j == 24){
							printf("| %i \n", contador);
							contador++;
				}
		}
		}
				for(int p = 0; p < 25; p++){
					printf("+--");
					if(p == 24){
					printf("+ \n");
					for(int s = 0; s < 10; s++){
					printf("| %i", contador2);
					contador2++;
					if(contador2 > 9){
						for(int g = contador2; g < 25; g++){
						printf("|%i", contador2);
						contador2++;
						}
	}
		}
			printf("| \n ");
		}
	}
			
			while(cancela != 4){
			printf("+-------------------------------------+ \n");
			printf("|Tecle 1 para cancelar alguma reserva | \n");
			printf("|Tecle 2 para cancelar alguma venda   | \n");
			printf("|Tecle 3 para cancelar alguma meia    | \n");
			printf("|Tecle 4 para encerrar o espetáculo   | \n");
			printf("+-------------------------------------+ \n");
			scanf("%i", &cancela);
				
				if(cancela == 1){
					if(teatro[fileira][cadeira] == 'R'){
						printf("Escolha qual reserva deseja escolher \n");
						printf("Fileira:");
						scanf("%i", &fileira);
						printf("Cadeira:");
						scanf("%i", &cadeira);
						
							teatro[fileira][cadeira] = 'D';
						}
					else{
				printf("Este lugar não esta reservado, escolha outra opção: \n");
					scanf("%i", &cancela);
					}
		
				}

				else if(cancela == 2){
					printf("Escolha qual reserva deseja escolher \n");
						printf("Fileira:");
						scanf("%i", &fileira);
						printf("Cadeira:");
						scanf("%i", &cadeira);
						
					if(teatro[fileira][cadeira] == 'V'){
							teatro[fileira][cadeira] = 'D';
				scanf("%i", &cancela);
			}
					else{
			printf("Este lugar não esta vendido, escolha outra opção: \n");
				scanf("%i", &cancela);
					}	
				
				}	
				else if(cancela == 3){
					printf("Escolha qual reserva deseja escolher \n");
						printf("Fileira:");
						scanf("%i", &fileira);
						printf("Cadeira:");
						scanf("%i", &cadeira);
						
					if(teatro[fileira][cadeira] == 'v'){
							teatro[fileira][cadeira] = 'D';
			}
					else{
				printf("Este lugar não esta vendido como meia, escolha outra opção: \n");
				scanf("%i", &cancela);
					}	
					cancela = 0;	
					fileira = 835;
					cadeira = 835;
				}	

			else{
				
			}
			contador=0;
			contador2=0;
			for(int t = 0; t < 20; t++) {
					
				for(int b = 0; b < 25; b++){
					printf("+--");
					if(b == 24){
							printf("+ \n");
						}
					}                
					for(int j = 0; j < 25; j++){
						printf("| %c", teatro[t][j]);
						if(j == 24){
							printf("| %i \n", contador);
							contador++;
				}
		}
		}
				for(int p = 0; p < 25; p++){
					printf("+--");
					if(p == 24){
					printf("+ \n");
					for(int s = 0; s < 10; s++){
					printf("| %i", contador2);
					contador2++;
					if(contador2 > 9){
						for(int g = contador2; g < 25; g++){
						printf("|%i", contador2);
						contador2++;
						}
	}
		}
			printf("| \n ");
		}
	}	
			}
			
			contador=0;
			contador2=0;
			
			for(int t = 0; t < 20; t++) {
					for(int b = 0; b < 25; b++){
						if(teatro[t][b] == 'R'){
							soma = soma+(ingresso*0.6);
						}
						else if(teatro[t][b] == 'V'){
							soma = soma+ingresso;
						}
						else if(teatro[t][b] == 'v'){
							soma = soma+ (ingresso/2);
						}
						}
					}                					
				printf("Soma = %f", soma);
				}
			}
			

		
	
	


