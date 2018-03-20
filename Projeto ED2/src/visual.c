#include "../hdr/visual.h"

void menu()
{
    printf("\tAGENDA DE EVENTOS\n");
    printf("\n[1] Exibir Eventos");
    printf("\n[2] Incluir Evento");

    printf("\n[0] Sair\n");

    printf("\n-> ");
}

void printar_data(struct Data input)
{
    printf("DATA E HORA: %2d/%2d/%4d %2dh\n", input.dia, input.mes, input.ano, input.hora);
}

void printar_node(node_Arvore *node)
{
    printf("EVENTO:\t%s\n", node->info.assunto);
    printf("LOCAL: \t%s\n", node->info.local);
    printar_data(node->info.dataEvento);
    printf("- - -\n");

}
