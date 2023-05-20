/*****************************************************************//**
 * \file   Cidades.h
 * \brief  
 * 
 * \author User
 * \date   May 2023
 *********************************************************************/

#include "Constantes.h"

#pragma once

//Constantes

#define tNomeCidades 30
#define tMoradaCidades 80
#define txtFileCidades "CidadesSaveTxt.txt"
#define binFileCidades "CidadesSaveBin.txt"

#define tNomeAdj 30
#define tMoradaAdj 80
#define txtFileAdj "AdjSaveTxt.txt"
#define binFileAdj "AdjSaveBin.txt"

//defenir os caminhos entre cidades

typedef struct Adj Adj;
struct Adj
{
	//int codOrigem;
	int codDestino;
	int peso;
	Adj* next;
};

typedef struct AdjFile 
{
	int codOrigem;
	int codDestino;
	int peso;
}AdjFile;

//defenir cidades

typedef struct Cidades Cidades;
struct Cidades 
{
	char nomeCidade;
	int codCidade;
	Adj* conexoes;
	Cidades* proximo;
};

typedef struct CidadeFile
{
	char nomeCidade;
	int codCidade;
}CidadeFile;

//typedef struct ListaCidades
//{
//	Cidades cidade;
//	struct ListaCidades *proximo;
//}ListaCidades;

//assinaturas de funções das cidades

Cidades* AdicionarCidade(char nomeCidade, int codCidade, Cidades* listaCidades);
void MostraListaCidades(Cidades* listaCidades);
int GravaListaCidade(Cidades* listaCidades);
int LerListaCeidade(Cidades* listaCidades);
int EliminarCidade(Cidades* listaCidades, int x);
int ModificarCidade(Cidades* listaCidades, char x);
bool EliminaListaCidade(Cidades* listaCidades);

//assinaturas das funções dos caminhos

Adj* AdicionarAdj(int codOrigem, int codDestino, int peso, Cidades* listaCidades);
void MostraListaAdj(Cidades* listaCidades);
int GravaListaAdj(Cidades* listaAdj, int x);
int LerListaAdj(Cidades* listaCidades, int x);
int EliminarAdj(Cidades* listaCidades, char x, char y);
int ModificarAdj(Cidades* listaCidades, char x, char y);
bool EliminaListaAdj(Cidades* listaCidades, char x);


