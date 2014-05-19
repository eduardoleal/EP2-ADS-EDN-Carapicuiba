#include "no_duplo.h"

typedef struct lista_dupla {
	t_apont_no_duplo prim;
} t_lista_dupla;

int vazia_dupla (t_lista_dupla l);
void inicia_lista_dupla (t_lista_dupla *);
void insere_inicio_dupla (t_lista_dupla *, int);
void mostra_dupla (t_lista_dupla);
void insere_fim_dupla (t_lista_dupla *, int);
int remove_inicio_dupla (t_lista_dupla *);
int remove_fim_dupla (t_lista_dupla *);
