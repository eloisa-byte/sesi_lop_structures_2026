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