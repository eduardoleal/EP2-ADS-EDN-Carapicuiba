#include <stdio.h>
#include <stdlib.h>
#include "lista_dupla.h"

void inicia_lista_dupla (t_lista_dupla * l) {
	l->prim = NULL;
}
int vazia_dupla (t_lista_dupla l) {
	return l.prim == NULL;
}
void insere_inicio_dupla (t_lista_dupla *l, int i) {
	t_apont_no_duplo novo = cria_no_duplo(i);
	if (novo) {
		if (l->prim) {
			novo->prox = l->prim;
			novo->ant = l->prim->ant;
			l->prim->ant->prox = novo;
			l->prim->ant = novo;
		}
		l->prim = novo;
	}
	else {
		printf ("\nfalha na alocacao de no\n");
	}
}
void insere_fim_dupla (t_lista_dupla *l, int i) {
	t_apont_no_duplo novo = cria_no_duplo(i);
	if (novo) {
		if (l->prim) {
			novo->prox = l->prim;
			novo->ant = l->prim->ant;
			l->prim->ant->prox = novo;
			l->prim->ant = novo;
		}
		else {
			l->prim = novo;
		}
	}
	else {
		printf ("\nfalha na alocacao de no\n");
	}
}
void mostra_dupla (t_lista_dupla l) {
	t_apont_no_duplo aux = l.prim;
	if (!aux)
		printf ("\nLista Vazia!\n");
	else {
		do {
			printf ("%d ", aux->info);
			aux = aux->prox;
		} while (aux != l.prim);
	}
	printf ("\n\n");
}
int remove_inicio_dupla (t_lista_dupla *l) {
	t_apont_no_duplo aux = l->prim;
	t_apont_no_duplo segundo, ultimo;
	int i = l->prim->info;
	if (l->prim->prox == l->prim) {
		l->prim = NULL;
	}
	else {
		//ultimo = l->prim->ant;
		//segundo = l->prim->prox;
		//segundo->ant = ultimo;
		//ultimo->prox = segundo;
		//l->prim = segundo;
		l->prim->prox->ant = l->prim->ant;
		l->prim->ant->prox = l->prim->prox;
		l->prim = l->prim->prox;
	}
	free(aux);
	return i;
}
int remove_fim_dupla (t_lista_dupla *l) {
	t_apont_no_duplo aux, ultimo, penultimo;
	ultimo = l->prim->ant;
	int i = ultimo->info;
	aux = ultimo;
	if (ultimo->prox == ultimo) {
		l->prim = NULL;
	}
	else {
		penultimo = ultimo->ant;
		l->prim->ant = penultimo;
		penultimo->prox = l->prim;
	}
	free(aux);
	return i;
}





