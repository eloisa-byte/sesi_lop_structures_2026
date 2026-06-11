#include <stdio.h>
#include <windows.h>

struct Cliente {
	char nome [50];
	int idade;
	char email[100];
	
};

void main(){
	SetConsoleOutputCP(CP_UTF8);
	struct Cliente cli1;
	struct Cliente cli2;
	struct Cliente cli3;
	
	strcpy(cli1.nome,"João Silva");
	cli1.idade = 25;
	strcpy(cli1.email,"joao@email.com");
	
	printf("%s, idade: %d, %s\n", cli1.nome, cli1.idade, cli1.email);
	
	strcpy(cli2.nome,"Eloísa Macedo");
	cli2.idade = 16;
	strcpy(cli2.email,"eloisa@email.com");
	
	printf("%s, idade: %d, %s\n", cli2.nome, cli2.idade, cli2.email);
	
	strcpy(cli3.nome,"Riana Correios");
	cli3.idade = 134;
	strcpy(cli3.email,"riana@email.com");
	
	printf("%s, idade: %d, %s\n", cli3.nome, cli3.idade, cli3.email);
	
	getch();
	
}