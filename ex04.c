#include <stdio.h>
#include <windows.h>

struct Produto{
	char nome[30];
	float preco;
	int quantidade;
	float estoque;
};

int main(){
	SetConsoleOutputCP(CP_UTF8);
	int n;
	printf("Quantos produtos você deseja cadastrar? ");
	scanf("%d", &n);
	
	struct Produto prod[n];
	
	for(int i = 0; i < n; i++){
		printf("Digite o Nome: ");
		scanf("%s", &prod[i].nome);
		printf("Digite o Preço: ");
		scanf("%f", &prod[i].preco);
		printf("Digite o Quantidade: ");
		scanf("%d", &prod[i].quantidade);
		printf("\n");
	}
	float total = 0;
	for(int i = 0; i < n; i++){
		printf("%s\nPreço: R$%.2f\nQuantidade: %d\n", prod[i].nome, prod[i].preco, prod[i].quantidade);
		prod[i].estoque = prod[i].preco * prod[i].quantidade;
		printf("Total de %s: %.2f\n", prod[i].nome, prod[i].estoque);
		total += prod[i].estoque;
		printf("\n");
	}
	printf("Total do Estoque: %.2f\n", total);
	return 0;
}