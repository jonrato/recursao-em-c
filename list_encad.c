#include <stdio.h>
#include <stdlib.h>

typedef struct cel celula;
struct cel{
	int dado;
	celula *prox;
};

void insere(int x, celula *p){
	celula *nova;
	nova = (celula *)malloc(sizeof(celula));
	nova->dado = x;
	nova->prox = p->prox;
	p->prox = nova;
}

void imprime(celula *ini){
	celula *p;
	printf("\n Valores na lista:\n");
	for (p=ini->prox; p != NULL; p=p->prox){
		printf("%d\t",p->dado);
	}
	printf("\n");
}

int main(){
	int op = -1, valor;
	celula *lista = NULL;
	lista = (celula *)malloc(sizeof(celula));

	while(op !=0){
		printf("\nOpcoes disponiveis:\n")
		printf("\t1 p/ imprimir lista\n");
		printf("\t2 p/ inserir novo elemento");
		printf("\t0 p/ encerrar\n");
		printf("Entre com a opcao desejada: \n");
		scanf("%d",&op);
		switch(op){
			case 0:
				printf("\nFalouu, carai\n");
				break;
			case 1:
				imprime(lista);
				break;
			case 2:
				printf("Entre com o valor a ser inserido: \n");
				scanf("%d", &valor);
				insere(valor,lista);
				break;
			default:
				printf("\nOPCAO INVALIDA PORRA!!!\n");

		}
	}
	return 0;
}