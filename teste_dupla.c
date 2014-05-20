#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "lista_dupla.h"

int main () {
	t_lista_dupla l;
    initLista(&l);
    addBeginningList(&l, 1);
    showList(&l);
	return 0;
}
