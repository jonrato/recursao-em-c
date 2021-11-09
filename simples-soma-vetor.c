#include <stdio.h>
#include <stdlib.h>

int soma(int v[], int tam){
	if(tam==0)
		return 0;
	else
		return v[tam-1] + soma(v, tam-1);
}

int main(){
	int vet[10] = {2,3,4,1,6,33,2,34,86,10};

	printf("Soma:%d\n",soma(vet,10));
	return 0;
}