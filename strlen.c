#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
	
	//strlen() retorna o tamanho (válido) de uma string
	char nome[100];
	
	printf ("Informe o nome: %s", nome);
	scanf (" %[^\n]s", nome);
	
	int tam = strlen(nome);
		
	printf("O nome %s tem o tamanho de %d ", nome, tam);
	
	return 0;
}

