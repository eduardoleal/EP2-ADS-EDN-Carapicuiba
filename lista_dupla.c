#include <stdio.h>
#include <stdlib.h>
#include "lista_dupla.h"

/**
 * Inicia lista dupla
 * @param l elemento a ser inciado
 */
void initList(t_lista_dupla * l)
{
	l->prim = NULL;
}

/**
 * Verifica se um elemento está vázio
 * @param  l elemento a ser verificado
 * @return boolean
 */
int isEmptyList(t_lista_dupla l)
{
	return l.prim == NULL;
}

/**
 * Insere no início da lista
 * @param l lista onde será inserido
 * @param i número a ser inserido
 */
void addBeginningList(t_lista_dupla *l, int i)
{
	t_apont_no_duplo novo = newNoDuplo(i);

	if (! novo) {
        printf ("\nfalha na alocacao de no\n");
        return;
    }
    
	if (l->prim) {
        novo->prox         = l->prim;
        novo->ant          = l->prim->ant;
        l->prim->ant->prox = novo;
        l->prim->ant       = novo;
	}

	l->prim = novo;
}

/**
 * Insere ao fim da lista
 * @param l [description]
 * @param i [description]
 */
void addEndList(t_lista_dupla *l, int i)
{
	t_apont_no_duplo novo = newNoDuplo(i);

	if (! novo) {
        printf ("\nfalha na alocacao de no\n");
        return;
    }
    
	if (l->prim) {
        novo->prox         = l->prim;
        novo->ant          = l->prim->ant;
        l->prim->ant->prox = novo;
        l->prim->ant       = novo;
	}
	else {
		l->prim = novo;
	}
}

/**
 * Exibe lista
 * @param l elemento para ser exibido
 */
void showList(t_lista_dupla l)
{
	t_apont_no_duplo aux = l.prim;

	if (! aux) {
		printf ("\nLista Vazia!\n");
        return;
    }
	
	do {
		printf ("%d ", aux->info);
		aux = aux->prox;
	} while (aux != l.prim);	

	printf ("\n\n");
}


/**
 * Remove do início da lista
 * @param  l lista de onde será removído
 * @return info do elemento removido
 */
int delBeginnindList(t_lista_dupla *l)
{
	t_apont_no_duplo aux = l->prim;
	t_apont_no_duplo segundo, ultimo;

	int i = l->prim->info;

	if (l->prim->prox == l->prim) {
		l->prim = NULL;
        return;
	}
			
    l->prim->prox->ant = l->prim->ant;
    l->prim->ant->prox = l->prim->prox;
    l->prim            = l->prim->prox;	
	
	return i;
}

/**
 * Remove do fim da lista
 * @param  l elemento de onde será removido
 * @return info do elemento removido
 */
int delEndList (t_lista_dupla *l)
{
	t_apont_no_duplo aux, ultimo, penultimo;

    ultimo = l->prim->ant;
    int i  = ultimo->info;
    aux    = ultimo;

	if (ultimo->prox == ultimo) {
		l->prim = NULL;
        return;
	}

    penultimo       = ultimo->ant;
    l->prim->ant    = penultimo;
    penultimo->prox = l->prim;
	
	return i;
}





