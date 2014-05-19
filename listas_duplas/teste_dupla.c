#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "lista_dupla.h"

int main () {
	int opcao, valor;
	t_lista_dupla l;
	inicia_lista_dupla(&l);
	srand(time(0));
	do {
		printf ("\n-> ");
		scanf ("%d", &opcao);
		switch (opcao) {
			case 1:
				valor = rand() % 100;
				insere_inicio_dupla (&l, valor);
				printf ("\n%d inserido no inicio\n", valor);
				break;
			case 2:
				valor = rand() % 100;
				insere_fim_dupla (&l, valor);
				printf ("\n%d inserido no final\n", valor);
				break;
			case 3:
				if (!vazia_dupla(l)) {
					valor = remove_inicio_dupla (&l);
					printf ("\n%d removido do inicio\n", valor);
				}
				else {
					printf ("\nLista Vazia, nao ha o que remover\n");
				}
				break;
			case 4:
				if (!vazia_dupla(l)) {
					valor = remove_fim_dupla (&l);
					printf ("\n%d removido do final\n", valor);
				}
				else {
					printf ("\nLista Vazia, nao ha o que remover\n");
				}
				break;
			case 5:
				printf ("A lista esta assim:\n");
				mostra_dupla (l);
				break;
			default:
				printf ("\nPrograma Encerrado\n");
		}
	} while (opcao);
	printf ("A lista ficou assim:\n");
	mostra_dupla (l);
	return 0;
}
