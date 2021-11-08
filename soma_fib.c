#include <stdio.h>
#include <gconio.h>

int fib(int n){
	int i,a,b,c;
	if((n==1) || (n==2))
		return 1;
	else{
		a=0;
		b=1;
		for(i=3;i<=n;i++){
			c=a+b;
			a=b;
			b=c;
		}

		return c;
	}
}

int main(){
	int n,s;
	printf("Digite um valor:\n");
	scanf("%d",&n);
	s = fib(n);
	printf("A soma da sequencia eh: %d\n", s);
}