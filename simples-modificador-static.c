#include <stdio.h>
#include <stdlib.h>

int mediaPares(int vet[], int tam){
	static int soma=0,quant=0;
	if(tam==0)
		return (soma*1.0)/quant;
	else{
		if(vet[tam-1] % 2 == 0){
			soma = soma + vet[tam-1];
			quant++;
			return mediaPares(vet, tam-1);
		}
		else
			return mediaPares(vet, tam-1);
	}
}

int main(){
	int vet[6] = {2,4,38,7,11,9};

	printf("Media dos pares: %d\n", mediaPares(vet,6) );

	return 0;
}