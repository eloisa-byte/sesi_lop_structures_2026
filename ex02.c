#include <stdio.h>
#include <windows.h>

struct Produto {
	char nome [50];
	int preco;
	int quantidade;
	int valorestoque;
	
};

void main(){
	SetConsoleOutputCP(CP_UTF8);
	struct Produto pro1;
	
	strcpy(pro1.nome,"Luminar Hub");
	pro1.preco = 354;
	pro1.quantidade = 50;
	pro1.valorestoque = pro1.quantidade * pro1.preco;
	
	printf("%s, preco: %d, quantidade: %d, valor em estoque: %d\n", pro1.nome, pro1.preco, pro1.quantidade, pro1.valorestoque);
	
	getch();
	
}
