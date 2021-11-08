/*Considere a função maximo acima.  Faz sentido trocar
  return v[0]  por  return 0?  Faz sentido trocar
  return v[0]  por  return INT_MIN?  Faz sentido trocar
    x > v[n-1]  por  x >= v[n-1]? */
#include <stdio.h>
#include <stdlib.h>

int maxx(int p, int u, int v[]);

int main(){
	int p,u;
	printf("Digite p: \n");
	scanf("%d",&p);
	printf("Digite u: \n");
	scanf("%d", &u);
	
	

}

int maxx (int p, int u, int v[]){
	if (p == u) return v[u];
	else{
		int m,x,y;
		m = (p + u)/2; /* p <= m < u */
		x = maxx(p,m,v);
		y = maxx (m+1,u,v);
		if(x>=y){
			return x;
			printf("%d\n",x);
		} 
		else{
			return y;
			printf("%d\n", y);
		} 
	}
}