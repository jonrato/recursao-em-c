#include <stdio.h>
#include <stdlib.h>

//4! = 4*3*2*1 = 24
//1! e 0! = 1

int fatorial(int n){
	if(n==0 || n==1)
		return 1;
	else {
		return n*fatorial(n-1);
	}
}


int main(){
	int n;

	printf("Digite um valor maior que zero:\n");
	scanf("%d",&n);

	printf("fatorial de %d: %d\n",n,fatorial(n));

	return 0;
}