# Estruturas

Estruturas são tipos de dados compostos que permitem agrupar diferentes tipos de dados sob um mesmo nome. Em C, as estruturas são definidas usando a palavra-chave struct. Elas são úteis para organizar e representar dados complexos de forma mais clara e eficiente.

## Tecnologias

Linguagem C
DevC++
Fluxograma

## Como testar

Clone o repositório
Abra o arquivo .c com o DevC++
Pressione F11 para compilar e executar

## Exercicío 1

Crie um programa que utilize uma estrutura para armazenar informações de um produto (nome, preço, quantidade) e exiba essas informações.

``` C
#include <stdio.h>
#include <windows.h>

struct Produto {
	char nome [50];
	int preco;
	int quantidade;
	
};

void main(){
	SetConsoleOutputCP(CP_UTF8);
	struct Produto pro1;
	
	strcpy(pro1.nome,"Luminar Hub");
	pro1.preco = 354;
	pro1.quantidade = 50;
	
	printf("%s, preco: %d, quantidade: %d\n", pro1.nome, pro1.preco, pro1.quantidade);
	
	getch();
	
}

```

## Exercício 2

Ao exibir as informações do produto, calcule e exiba o valor total em estoque (preço * quantidade).

``` C
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

```

## Exercício 3

Crie um vetor de estruturas para armazenar informações de múltiplos produtos e exiba as informações de cada produto, incluindo o valor total em estoque e o total geral.

``` C
#include <stdio.h>
#include <windows.h>

struct Produto {
	char nome [50];
	int preco;
	int quantidade;
	int valorestoque;
	float totalgeral;
	
};

void main(){
	SetConsoleOutputCP(CP_UTF8);
	struct Produto produtos[6];
	
strcpy(produtos[0].nome,"Luminar Hub");
	produtos[0].preco = 354;
	produtos[0].quantidade = 50;
	produtos[0].valorestoque = produtos[0].quantidade * produtos[0].preco;

	strcpy(produtos[1].nome,"AeroBrew Go");
	produtos[1].preco = 510;
	produtos[1].quantidade = 25;
	produtos[1].valorestoque = produtos[1].quantidade * produtos[1].preco;																																																																																																																																					

		strcpy(produtos[2].nome,"TerraGrip One");
	produtos[2].preco = 320;
	produtos[2].quantidade = 110;
	produtos[2].valorestoque = produtos[2].quantidade * produtos[2].preco;

	strcpy(produtos[3].nome,"AquaWave 360");
	produtos[3].preco = 412;
	produtos[3].quantidade = 200;
	produtos[3].valorestoque = produtos[3].quantidade * produtos[3].preco;

	strcpy(produtos[4].nome,"Bug-A-Salt");
	produtos[4].preco = 380;
	produtos[4].quantidade = 215;
	produtos[4].valorestoque = produtos[4].quantidade * produtos[4].preco;
	
	produtos[5].totalgeral = produtos[0].valorestoque + produtos[1].valorestoque + produtos[2].valorestoque + produtos[3].valorestoque + (produtos[4].quantidade * produtos[4].preco);
	
	for(int i = 0; i < 5; i++)
	printf("%s, preco: %d, quantidade: %d, valor em estoque: %d, valor total geral: %f\n", produtos[i].nome, produtos[i].preco, produtos[i].quantidade, produtos[i].valorestoque, produtos[i].totalgeral);
	
	getch();

}
```

## Exercício 4

Modifique o programa para permitir que o usuário insira as informações dos produtos em vez de atribuí-las diretamente no código.

``` C
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
```
