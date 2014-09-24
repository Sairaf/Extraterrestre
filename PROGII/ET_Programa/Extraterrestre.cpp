#include <stdio.h>
#include "Extraterrestre.h"

Extraterrestre::Extraterrestre()
{
 this->nome = "";
 this->raca = "";
 this->poder = "";
 this->agressividade = "";
 this->fraqueza = "";
 this->qntdOlhos = 0;
}

Extraterrestre::Extraterrestre(const string nome,const string raca,const string poder,const string agressividade, const string fraqueza,const int qndOlhos)
{
 this->nome = nome;
 this->raca = raca;
 this->poder = poder;
 this->agressividade = agressividade;
 this->fraqueza = fraqueza;
 this->qntdOlhos = qntdOlhos;	
}



void Extraterrestre::adicionar(Extraterrestre et[], const string nome,const string raca,const string poder,const string agressividade, const string fraqueza,const int qndOlhos, const int pos)
{
 
}