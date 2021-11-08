#include <stdio.h>
#include <gconio.h>

int expo(int x, int y){
	if(y==0)
		return 1;
	if(y==1)
		return x;
	return x*expo(x, y-1);
}

int main(void){
	int x, y, e;
	printf("Exponencial x elevado a y\n");
	printf("Digite um numero inteiro x:\n");
	scanf("%d", &x);
	printf("Digite um numero inteiro y:\n");
	scanf("%d", &y);

	if(y<0){
		printf("y tem que ser maior ou igual a zero\n");
		getch();
	}
	else{
		e=expo(x,y);
		printf("X elevado a Y eh: %d \n",e);
		getch();
	}
}