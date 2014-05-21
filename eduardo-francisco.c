#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "lista_dupla.h"

int main(int argc, char const *argv[])
{
    int soldiers_qnt, i = 0;
    t_lista_dupla l;

    initList(&l);
    srand(time(0));    
    soldiers_qnt = 1000 + rand() % 1000;

    for (i = 1; i <= soldiers_qnt; ++i) {
        addEndList(&l, i);        
    } 

    printf("%d\n", delRand(&l, soldiers_qnt));

    return 0;
}