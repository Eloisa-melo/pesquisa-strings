#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
	
	//strcmp COMPARAÇÃO ENTRE STRINGS
	char nome[100];
	char nome2[100];
	
	printf ("Digite o que desejar: %s", nome);
	scanf (" %[^\n]s", nome);
	printf ("Outra: %s", nome2);
	scanf (" %[^\n]s", nome2);
	
	strcmp(nome, nome2);
	
	//se retornar valor negativo "nome" vem antes de "nome2"
	//se valor positivo "nome2" vem antes de "nome"
	//se valor 0 "nome" é exatamente igual a  "nome2"
	
	if (strcmp(nome,nome2) < 0)
		printf (" %s\n %s", nome, nome2);
		else
		if (strcmp(nome,nome2) > 0)
		printf (" %s\n %s", nome2, nome);
			else
			printf ("Os dois nomes são idênticos\n");
	
	return 0;
}

