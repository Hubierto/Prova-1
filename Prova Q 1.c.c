#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	
	int numeros[6], numerosPares = 0, numerosImpares = 0, i;
	
	for (i = 0; i < 6; i++) {
		printf("Digite seu %iº número: ", i+1);
		scanf("%i",&numeros[i]);
		
		if (numeros[i] % 2 == 0) {
			numerosPares++;
		} else {
			numerosImpares++;
		}
		
	}
	
	system("cls || clear");
	for (i = 0; i < 6; i++){
	printf("\n%iº número: %i \n ",i+1 ,numeros[i]);
}
	printf("\nQuantidade de números pares digitados:%i \n", numerosPares);
	printf("Quantidade de números impares digitados: %i", numerosImpares);

	



}
