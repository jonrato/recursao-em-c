#include <stdio.h>
#include <stdlib.h>


int maximo(int n, int *v){
	int m;
	if(n==1)
		return v[0];
	else{
		m=maximo(n-1,v);
		if(m>v[n-1])
			return m;
		else
			return v[n-1];
	}
}

int main(){
	int i,n,m;
	int *v;
	printf("n = \n");
	scanf("%d",&n);
	v = (int *)calloc(n,sizeof(int));
	printf("v = \n");
	for(i=0;i < n;i++){
		scanf("%d",&v[i]);
	}
	m=maximo(n,v);
	printf("Maximo = %d\n",m);
	return 1;
}