#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
	
	//leia uma string, depois um caractere e retorne quantas vezes esse
	//caractere aparece nessa string
	
	char nome[100];
	char c;
	
	printf ("Digite aqui o que quiser: %s", nome);
	scanf (" %[^\n]s", nome);
	
	printf ("Digite um caractere: %c", c);
	scanf (" %[^\n]c", &c);
	
	int cont;
	int tam = strlen(nome);
	for (int i = 0; i < tam; i++){
		if (c == nome[i])
		cont ++;
	}
	printf ("O simbolo %c aparece %d vezes no nome %s", c, cont, nome);
	
	return 0;
}

