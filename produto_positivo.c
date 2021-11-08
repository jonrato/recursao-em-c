#include <stdio.h>
#include <stdlib.h>

int prod(int n, int *v){
	if(n==1){
		if(v[0] > 0)
			return v[0];
		else
			return 1;
	}
	else{
		if(v[n-1] > 0)
			return v[n-1]*prod(n-1,v);
		else
			return prod(n-1,v);
	}
}

int main(){
	int i,n,p;
	int *v;
	printf("n = \n");
	scanf("%d",&n);
	v = (int *)calloc(n,sizeof(int));
	printf("v = \n");
	for(i=0;i<n;i++){
		scanf("%d", &v[i]);
	}
	p = prod(n,v);
	printf("p = %d\n",p);
	return 1;
}