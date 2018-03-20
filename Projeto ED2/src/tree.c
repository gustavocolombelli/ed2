#include "../hdr/tree.h"

node_Arvore* alocar_node()
{
    node_Arvore* node = (node_Arvore*) malloc (sizeof(node_Arvore));

    node->dir = NULL;
    node->esq = NULL;

    return node;
}

void liberar_node(node_Arvore* node)
{
    if (node == NULL)
        return;

    liberar_node(node->esq);
    liberar_node(node->dir);

    free(node);
}

void encerrar_Arvore(node_Arvore* raiz)
{
    if (raiz == NULL)
        return;

    liberar_node(raiz);

    free(raiz);
}

void inserir_node(node_Arvore *raiz, struct Evento info)
{
    if (raiz == NULL)
        return;

    node_Arvore *novo = alocar_node();

    novo->info = info;
    novo->dir = NULL;
    novo->esq = NULL;
    novo->visivel = TRUE;

    if (raiz->dir == NULL && raiz->esq == NULL)
    {
        raiz->dir = novo;
        raiz->esq = novo;
    }

    else
    {
        node_Arvore *cursor = raiz;
        node_Arvore *anterior;
        int cmp;

        while (cursor != NULL){
            cmp = comparar_datas(cursor->info.dataEvento, novo->info.dataEvento);

            if (cmp == 0) /* data e hora já ocupadas */
            {
                erro(CONFLITO_DATA);
                free(novo);
                return;
            }

            else if (cmp == -1) /* cursor < novo */
            {
                anterior = cursor;
                cursor = cursor->dir;
            }

            else if (cmp == 1) /* cursor > novo */
            {
                anterior = cursor;
                cursor = cursor->esq;
            }


        }

        cursor = novo;

        if (cmp == 1)
            anterior->esq = cursor;

        else if (cmp == -1)
            anterior->dir = cursor;
    }

}

void listar_Arvore(node_Arvore *node) /* Percurso em-ordem. Para listagem geral, o parâmetro será a raiz. */
{
    if (node == NULL)
        return;

    else
    {
        listar_Arvore(node->esq);
        printar_node(node);
        listar_Arvore(node->dir);
    }
}
