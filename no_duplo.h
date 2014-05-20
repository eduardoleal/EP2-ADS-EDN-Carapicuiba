typedef struct no_duplo * t_apont_no_duplo;

typedef struct no_duplo {
	int info;
	t_apont_no_duplo ant;
	t_apont_no_duplo prox;
} t_no_duplo;

t_apont_no_duplo newNoDuplo(int);
