#include <stdio.h>
#include <stdlib.h>

float vpol(int n, int *c, float x){
	if(n>0)
		return x*vpol(n-1,c,x) + c[n];
	else
		return c[0];
}

int main(){
	int i,n;
	int *c;
	float v,p;
	printf("n = \n");
	scanf("%d",&n);
	c = (int *)calloc(n+1, sizeof(int));
	printf("c = \n");
	for (i=0;i<=n;i++){
		scanf("%d",&c[i]);
	}
	printf("v = \n");
	scanf("%f",&v);
	p = vpol(n,c,v);
	printf("p(%f) = %f\n",v,p);
	return 1;
}