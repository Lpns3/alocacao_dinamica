#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main() 
{
	char * memoria_alocada;
	
	memoria_alocada = calloc (50 , sizeof (char));
	
	if (memoria_alocada == NULL)
	{
		printf ("Nao foi possivel alocar a memoria desejada!\n");
	}
	
	else
	{
		strcpy (memoria_alocada, "Este e a melhor aula do mundo!\n");
	}
	
	printf ("O conteudo de memoria alocada e: %s", memoria_alocada);
	
	free(memoria_alocada);
	
	return 0;
}
