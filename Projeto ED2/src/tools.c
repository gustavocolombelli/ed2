#include "../hdr/tools.h"

void erro(int cod)
{
    switch(cod){
        case CONFLITO_DATA:
            printf("Voce ja tem um evento neste horario.\n");
            break;

    }
}


int comparar_datas(struct Data input_A, struct Data input_B) /* -1: A < B / 0: A = B / 1: A > B / 2: Erro */
{
    if (input_A.ano == input_B.ano)
    {
        if (input_A.mes == input_B.mes)
        {
            if (input_A.dia == input_B.dia)
            {
                if (input_A.hora < input_B.hora)
                    return -1;

                else if (input_A.hora == input_B.hora)
                    return 0;

                else
                    return 1;
            }


            else if (input_A.dia < input_B.dia)
                return -1;

            else
                return 1;
        }

        else if (input_A.mes < input_B.mes)
            return -1;

        else
            return 1;
    }

    else if (input_A.ano < input_B.ano)
        return -1;

    else
        return 1;

    return 2; /* warning: control reaches end of non-void function */
}

