#define TRUE 1
#define FALSE 0

typedef struct Data
{
    int dia;
    int mes;
    int ano;
    int hora;
}DMA;

struct Evento
{
    char assunto[20];
    char local[20];
    struct Data dataEvento;
};

typedef struct node_Arvore
{
    short int visivel;
    struct Evento info;
    struct node_Arvore *esq;
    struct node_Arvore *dir;
}node_Arvore;
