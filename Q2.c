#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int numero, i, soma = 0;
	float media;
	
	do{
		printf("Digite um número: ");
		scanf("%i",&numero);
		
		if(numero > 0){
			i++;
			soma += numero;
		}
		
		media = soma / i;
		
	}while(numero >= 0);
	
	system("cls||clear");
	printf("Média: %.1f", media);
}
