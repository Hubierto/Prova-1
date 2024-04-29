#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	char nome[200];
	int nota, i, soma = 0;
	float media;
	
	printf("Digite o nome do aluno: ");
	scanf("%s",&nome);
	
	for(i = 0; i < 4; i++){
		printf("Digite a %iª nota: ", i + 1);
		scanf("%i",&nota);
		
		soma += nota;
	}
	
	media = soma / 4;
	
	system("cls||clear");
	printf("=== Exibindo resultados ===\n");
	printf("Nome do aluno: %s\n", nome);
	for(i = 0; i < 4; i++){
		printf("%iª nota: %i\n", i + 1, nota);
	}
	
	if(media >= 7){
		printf("Aprovado!");
	}else if(media < 7 && media >= 5){
		printf("Recuperação");
	}else{
		printf("Reprovado");
	}
	
	
	
	return 0;
}
