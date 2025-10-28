#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//copia uma constante de string diretamente para uma variável de string
int main(){
	char nome[100];
	char nome2[100];
	
	printf ("Nome definido: %s\n", nome);
	scanf (" %[^\n]s", nome);
	
	strcpy(nome2, nome);
	
	printf ("Atualizado: %s\n", nome2);
	
	return 0;
}

