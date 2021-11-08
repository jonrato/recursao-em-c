#include <stdio.h>
#include <stdlib.h>

//Imprimir valores de n até zero

void imprimir(int x){
	if(x==0)
		printf("%d\n",x );
	else{
		printf("%d\n",x);
		imprimir(x-1);
	}
}

int main(){
	int n;
	printf("Digite um valor maior que zero:");
	scanf("%d",&n);
	imprimir(n);
	return 0;
}