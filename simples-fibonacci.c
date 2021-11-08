#include <stdio.h>
#include <stdlib.h>

/*
	Função recursiva que calcula a sequência de Fibonacci
	resultado = (n - 1) + (n - 2)
*/

int fibonacci(int n){
	if(n == 1)
		return 0;
	else{
		if(n==2)
			return 1;
		else
			return fibonacci(n-1) + fibonacci(n-2);
	}
}

int main(){
	int n;

	printf("Digite um valor maior que zero\n");
	scanf("%d",&n);

	printf("Sequencia de fibonacci de %d: %d", n, fibonacci(n));
	return 0;
}