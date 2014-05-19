#include <stdlib.h>
#include "no_duplo.h"

t_apont_no_duplo cria_no_duplo (int i) {
	t_apont_no_duplo novo = (t_apont_no_duplo) malloc (sizeof(t_no_duplo));
	if (novo) {
		novo->info = i;
		novo->prox = novo;
		novo->ant = novo;
	}
	return novo;
}
