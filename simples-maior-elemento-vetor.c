#include <stdio.h>
#include <stdlib.h>

int maior(int v[], int tam, int indice){
	if(tam==0)
		return v[indice];
	else{
		if(v[tam-1] > v[indice])
			return maior(v, tam-1,tam-1);
		else
			return maior(v,tam-1, indice);
	}
}

int main(){
	int vet[10] = {11,23,45,233,5,34,10,900,39,3500};

	printf("Maior: %d\n",maior(vet,10,0) );

	return 0;
}