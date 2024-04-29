#include <stdio.h>
#include <locale.h>
#include <limits.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i, maiorNumero = INT_MIN, menorNumero = INT_MAX, numero;
	
	for(i = 0; i < 5; i++){
		printf("Digite o %iº número: ", i + 1);
		scanf("%i",&numero);
		
		if(numero > maiorNumero){
			maiorNumero = numero;	
		}
		
		if(numero < menorNumero){
			menorNumero = numero;
		}
		
		
	}
	
	system("cls||clear");
		printf("Maior número: %i\n", maiorNumero);
		printf("Menor número: %i\n", menorNumero);
		
	return 0;
	
}
