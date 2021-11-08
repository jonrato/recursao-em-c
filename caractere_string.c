/*
Conta quantas vezes um caractere ocorre numa string
*/

#include <stdio.h>
#include <gconio.h>

int carac(char c, char s[]){
	if(s[0] == '\0')
		return 0;
	if(s[0] == c) return (1+carac(c,++s));
	return carac(c,++s);
}

int main(void){
	char s[30],c;
	int t;
	printf("Busca em String\n");
	printf("Digite a string:\n");
	gets(s);
	printf("Digite o caractere desejado:\n");
	c=getchar();
	t=carac(c,s);
	printf("Encontrado %d vezes", t);
	getch();
}