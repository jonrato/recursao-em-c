#include <stdio.h>
#include <gconio.h>

void mover(int n, int a, int b, int c){
	if (n>0){
		mover(n-1,a,c,b);
		printf("%d -> %d\n",a,b );
		mover(n-1,c,b,a);
	}
}

int main(){
	int n;
	printf("Numero de discos: \n");
	scanf("%d",&n);
	printf("Solucao para %d discos:\n",n);
	mover(n,1,3,2);
	return 1;
}