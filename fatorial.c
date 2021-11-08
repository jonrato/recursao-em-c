//Calculo de fatorial com função recursiva

#include <stdio.h>
#include <gconio.h>

//protótipo da função fatorial
double fatorial(int n);

int main(void){
	int numero;
	double f;

	printf("Digite o numero para calcular o fatorial:\n");
	scanf("%d", &numero);

	//chamada da função fatorial
	f = fatorial(numero);

	printf("Fatorial de %d = %.0lf \n", numero, f);

	getch();
	return 0;
}

double fatorial(int n){
	double vfat;

	if(n<=1)
		//Caso base: fatorial de n<=1 retorna 1
		return(1);
	else{
		//Chamada recursiva
		vfat = n*fatorial(n-1);
		return (vfat);
	}
}