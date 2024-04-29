#include <stdio.h>
#include <locale.h>
#include <time.h>

int main() {
	setlocale(LC_ALL,"");
	
	int idade, opcao;
	char nome[200], email[200], telefone[200];
	
	printf("Digite o seu nome: ");
	scanf("%s",&nome);
	printf("Digite a sua idade: ");
	scanf("%i",&idade);
	printf("Digite o seu e-mail: ");
	scanf("%s",&email);
	printf("Digite o seu telefone: ");
	scanf("%s",&telefone);
	
	do{
		system("cls||clear");
		printf("========= Menu ========\n");
		printf("1 - Mostrar o nome e idade;\n");
		printf("2 - Mostrar nome e e-mail;\n");
		printf("3 - Mostra nome e telefone;\n");
		printf("4 - Mostrar todas as informações;\n");
		printf("0 - Sair do programa.\n");
		
		printf("\nDigite uma opção:\n");
		scanf("%i",&opcao);
		
		switch (opcao){
			
			case 1:
				printf("Seu nome: %s, sua idade: %i\n", nome, idade);
				sleep(2);
				break;
				
			case 2:
		    	printf("Seu nome: %s, seu e-mail: %s\n", nome, email);
			    sleep(2);
			    break;
			 
		    		
			case 3:
		    	printf("Seu nome: %s, seu telefone: %s\n", nome, telefone);
			    sleep(2);
			    break;	    
			    
			    		
			case 4:
		    	printf("Seu nome: %s, sua idade: %i\n", nome, idade);
		    	printf("seu e-mail: %s, seu telefone: %s\n", email, telefone);
			    sleep(2);
			    break;
			    
			    		
			case 0:
		    	printf("Saindo...\n");
			    sleep(2);
			    break;
			
			default:
			    printf("opção incorreta\n");
			    sleep(2);
				break;	
		} 
			
}while (opcao != 0);

		return 0;

}
