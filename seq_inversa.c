#include <stdio.h>
#include <stdlib.h>

void sequencia(int n){
	int x;

	if(n==0)
		return;
	printf("x = \n");;
	scanf("%d",&x);
	sequencia(n-1);
	printf("%d\n",x);
}

int main(){
	int n;
	printf("n= ");
	scanf("%d",&n);
	sequencia(n);
	printf("\n");
	return 1;
}