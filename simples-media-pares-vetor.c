#include <stdio.h>
#include <stdlib.h>

int mediaPares(int vet[], int tam, int soma, int quant){
	if(tam==0)
		return soma/quant;
	else{
		if(vet[tam-1] % 2 == 0)
			return mediaPares(vet, tam-1, soma+vet[tam-1], quant +=1);
		else
			return mediaPares(vet, tam-1, soma, quant);
	}
}

int main(){
	int vet[6] = {2,4,6,7,8,9};

	printf("Media dos pares: %d\n", mediaPares(vet,6,0,0) );

	return 0;
}