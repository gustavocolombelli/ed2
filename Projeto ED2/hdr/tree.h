#ifndef TREE_H
#define TREE_H

#include <stdlib.h>

#include "tools.h"

node_Arvore* alocar_node();

void liberar_node(node_Arvore*);

void encerrar_Arvore(node_Arvore*);

void inserir_node(node_Arvore *raiz, struct Evento info);

void listar_Arvore(node_Arvore *node);

#endif // TREE_H
