#include "no_duplo.h"

typedef struct lista_dupla {
	t_apont_no_duplo prim;
} t_lista_dupla;

int isEmptyList(t_lista_dupla l);
void initList(t_lista_dupla *);
void addBeginningList(t_lista_dupla *, int);
void showList(t_lista_dupla);
void addEndList(t_lista_dupla *, int);
int delBeginningList(t_lista_dupla *);
int delEndList(t_lista_dupla *);
