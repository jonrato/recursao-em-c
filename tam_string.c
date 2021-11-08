#include <stdio.h>
#include <gconio.h>

int tamstring(char s[]){
	if (s[0] == '\0')
		return 0;
	return 1+tamstring(&s[1]);
}

int main(void){
	char s[20];
	int t;
	printf("Tamanho da string \n");
	printf("Digite a string:\n");
	scanf("%s", s);
	t=tamstring(s);
	printf("O tamanho da string eh: %d", t);
	getch();
}