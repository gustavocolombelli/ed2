#include "hdr/tree.h"
#include "hdr/visual.h"

#include <string.h>


int main()
{
    node_Arvore *raiz = alocar_node();
    struct Evento ev;

    strcpy(ev.assunto, "Show");
    strcpy(ev.local, "Darci");
    ev.dataEvento.ano = 2018;
    ev.dataEvento.mes = 9;
    ev.dataEvento.dia = 10;
    ev.dataEvento.hora = 11;

    inserir_node(raiz, ev);

    strcpy(ev.assunto, "Baile");
    strcpy(ev.local, "Abel");
    ev.dataEvento.ano = 2018;
    ev.dataEvento.mes = 9;
    ev.dataEvento.dia = 7;
    ev.dataEvento.hora = 11;

    inserir_node(raiz, ev);

    strcpy(ev.assunto, "Festa");
    strcpy(ev.local, "Roger");
    ev.dataEvento.ano = 2018;
    ev.dataEvento.mes = 9;
    ev.dataEvento.dia = 17;
    ev.dataEvento.hora = 11;

    inserir_node(raiz, ev);

    listar_Arvore(raiz->dir);

    liberar_node(raiz);

    printf("!!!!\n\n");

    listar_Arvore(raiz->dir);

    //menu();

    return 0;
}
