#include <stdlib.h>
#include "no_duplo.h"

/**
 * Cria nó duplo
 * @param  i info do nó
 * @return no
 */
t_apont_no_duplo newNoDuplo(int i)
{
	t_apont_no_duplo no = (t_apont_no_duplo)malloc(sizeof(t_no_duplo));

	if (no) {
        no->info = i;
        no->prox = no;
        no->ant  = no;
	}

	return no;
}