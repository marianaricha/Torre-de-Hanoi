/************************************************************
 * Universidade Federal de Juiz de Fora - UFJF              *
 * Instituto de Ciências Exatas                             *
 * Departamento de Ciência da Computação                    *
 * Disciplina: DCC014 – Inteligência Artificial - 2022.3    *
 * Professora: Luciana Conceição Dias Campos                *
 * Aluno(s): Gabriel Pereira Senra Soares                   *
 *           Ketleen Anne Faria                             *
 *           Lucia Helena da Silva Pereira                  *
 *           Mara de Lemos Gomes                            *
 *           Maria Eduarda Ribeiro Facio                    *
 *           Mariana Richa Ferreira                         *
 *           Rosa Maria Ottoni Fernandes                    *
 * Versão: 1.0.0                                            *
 *       TRABALHO PRÁTICO - GRUPO 2 - TORRE DE HANÓI        *
 ************************************************************/

/***********************************************************
 *                 Definição da Classe Grafo               *
 ***********************************************************/

#ifndef GRAFO_H
#define GRAFO_H

#include "No.h"

#include <algorithm>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

class Grafo {

private:
    vector <No*> nos;
    int totalArestas;

public:
    //Constructor
    Grafo();
    //Destructor
    ~Grafo();
    //Getters
    No* getNo(int id);
    int getTotalArestas();
    //Other methods
    bool existeNo(int id);
    void insereNo(int id, string estado, int custo);
    void insereAresta(int origemId, int destinoId, int custo, int regra);
    bool removeNo(int id);
    bool removeAresta(int origemId, int destinoId);
    void imprime();
    //Buscas - P1
    void buscaBacktracking(string estado_solucao, int i);
    void buscaEmProfundidade(string estado_solucao);
    void buscaEmLargura(string estado_solucao);
    //Buscas - P2
    void buscaOrdenada(string estado_solucao);
	void buscaGulosa(string estado_solucao);
    void buscaAEstrela(string estado_solucao);
};
#endif //GRAFO_H
