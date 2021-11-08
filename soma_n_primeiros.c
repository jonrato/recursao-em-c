#include <stdio.h>
#include <gconio.h>

int soma(int n){
	if(n==0)
		return 0;
	else
		return n + soma(n-1);
}

int main(){
	int n,s;
	printf("n = \n");
	scanf("%d", &n);
	s = soma(n);
	printf("Soma = %d\n",s);
	return 1;
}