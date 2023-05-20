#include "Cidades.h"

//cidades

Cidades* AdicionarCidade(char nomeCidade, int codCidade, Cidades* head)
{
    //Cria lista auxiliar
    Cidades* aux = (Cidades*)malloc(sizeof(Cidades));
    if (aux == NULL)
    {
        free(aux);
        return head;
    }
    aux->proximo = NULL;
    aux->conexoes = NULL;
    aux->codCidade = codCidade;
    aux->nomeCidade = nomeCidade;


    //Caso a lista esteja vazia
    if (head == NULL)
    {
        return aux;
    }
    else
    {
        Cidades* posicaoAtual = head;

        //Procurar o ultimo elemento na lista
        while (posicaoAtual->proximo != NULL)
        {
            posicaoAtual = posicaoAtual->proximo;
        }
        posicaoAtual->proximo = aux;
    }

    return head;
}

void MostraListaCidades(Cidades* listaCidades)
{
    Cidades* aux = listaCidades;
    Adj* aux2 = NULL;

    while (aux != NULL)
    {
        //enquanto que a lista tiver membros escreve os parametros
        printf("%d\n", aux->codCidade);
        printf("%s\n", aux->nomeCidade);
        aux2 = aux->conexoes;
        while (aux2 != NULL)
        {            
            printf(" - %d\n", aux->codCidade);
            printf(" - %d\n", aux2->codDestino);
            printf(" - %d\n", aux2->peso);
            aux2 = aux2->next;
        }
        aux = aux->proximo;
    }
}

//percisa de testes

int GravaListaCidade(Cidades* listaCidades)
{
    if (listaCidades == NULL) 
    {
        return 0;
    }

    FILE* file;
    file = fopen(binFileCidades, "wb");

    if (listaCidades == NULL)
    {
        return -1;
    }

    Cidades* aux = listaCidades;
    CidadeFile* auxfile = NULL;

    FILE* filea;
    filea = fopen(binFileAdj, "wb");

    while (listaCidades)
    {
        auxfile->codCidade = aux->codCidade;
        auxfile->nomeCidade = aux->nomeCidade;

        fwrite(&auxfile, 1, sizeof(auxfile), binFileCidades);

        Adj* auxA = aux->conexoes;
        AdjFile* auxfileA = NULL;
        
        while (aux->conexoes)
        {           

            auxfileA->codOrigem = aux->codCidade;
            auxfileA->codDestino = aux->conexoes->codDestino;
            auxfileA->peso = aux->conexoes->peso;
            fwrite(&auxfileA, 1, sizeof(AdjFile), binFileAdj);
            //fwrite(&auxfileA->codDestino, 1, sizeof(auxfileA->codDestino), binFileAdj);
            //fwrite(&auxfileA->codDestino, 1, sizeof(auxfileA->peso), binFileAdj);

            aux->conexoes = aux->conexoes->next;
        }
        aux = aux->proximo;
    }
    fclose(binFileAdj);
    fclose(binFileCidades);
}


//Adj

Adj* AdicionarAdj(int codOrigem, int codDestino, int peso, Cidades* listaCidades)
{
    //Cria lista auxiliar
    Adj* aux = (Adj*)malloc(sizeof(Adj));
    //aux->codOrigem=codOrigem;
    aux->codDestino = codDestino;
    aux->peso = peso;
    aux->next = NULL;
    Cidades* posicaoAtual = listaCidades;

    
    if (listaCidades == NULL)//ve se a lista esta vazia
    {
        return NULL;
    }
    else
    {
        while (posicaoAtual)
        {
            if (posicaoAtual->codCidade == codOrigem)
            {
                Adj* posicaoAtualB = posicaoAtual->conexoes;
                if (posicaoAtual->conexoes == NULL)
                {
                    posicaoAtual->conexoes = aux;
                }
                else
                {
                    while (posicaoAtualB->next != NULL)
                    {
                        posicaoAtualB = posicaoAtualB->next;
                    }
                    posicaoAtualB->next = aux;
                }
            }
            posicaoAtual = posicaoAtual->proximo;
        }
    }

    return NULL;
}

