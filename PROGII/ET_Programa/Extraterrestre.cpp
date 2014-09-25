#include <stdio.h>
#include "Extraterrestre.h"

Extraterrestre::Extraterrestre()
{
 this->nome = "default";
 this->raca = "default";
 this->poder = "default";
 this->agressividade = 0;
 this->fraqueza = "default";
 this->qntdOlhos = 0;
 this->valioso = "default";
}

Extraterrestre::Extraterrestre(const string nome,const string raca,const string poder, const string fraquezaconst, int agressividade,const int qndOlhos, const string valioso)
{
 Extraterrestre::setNome(nome);
 Extraterrestre::setRaca(raca);
 Extraterrestre::setPoder(poder);
 Extraterrestre::setAgressividade(agressividade);
 Extraterrestre::setFraqueza(fraqueza);
 Extraterrestre::setQntdOlhos(qntdOlhos);
 Extraterrestre::setValioso(valioso);
}

void Extraterrestre::setNome(const string& nome) 
{
this->nome = nome;
}
	
void Extraterrestre::setRaca(const string& raca) {
	 this->raca = raca;
	}
	
	void Extraterrestre::setAgressividade(const int& agressividade) {
		this->agressividade = agressividade;
	}

	void Extraterrestre::setFraqueza(const string& fraqueza) {
		this->fraqueza = fraqueza;
	}

	void Extraterrestre::setPoder(const string& poder) {
		this->poder = poder;
	}
	
	void Extraterrestre::setQntdOlhos(const int& qntdOlhos) {
		this->qntdOlhos = qntdOlhos;
	}
	
	void Extraterrestre::setValioso(const string& valioso)
	{
	  this->valioso = valioso;	
	}
	
	string Extraterrestre::getNome() const{
		return nome;
	}
	
	string Extraterrestre::getRaca() const{
		return raca;
	}
	
	string Extraterrestre::getFraqueza() const{
		return fraqueza;
	}
	
	string Extraterrestre::getPoder() const{
		return poder;
	}
	
	int Extraterrestre::getAgressividade() const{
		return agressividade;
	}
	
	int Extraterrestre::getQntdOlhos() const {
		return qntdOlhos;
	}

	string Extraterrestre::getValioso() const{
		return valioso;
	}


void Extraterrestre::adicionar(Extraterrestre et, const string nome,const string raca,const string poder, const string fraqueza,const int agressividade,const int qntdOlhos, const string valioso)
{
 setNome(nome);
 setRaca(raca);
 setPoder(poder);
 setAgressividade(agressividade);
 setFraqueza(fraqueza);
 setQntdOlhos(qntdOlhos);
 setValioso(valioso);
  
 /*
 et->setNome(nome);
 et->setRaca(raca);
 et->setPoder(poder);
 et->setAgressividade(agressividade);
 et->setFraqueza(fraqueza);
 et->setQntdOlhos(qntdOlhos);
 et->setValioso(valioso);
 */ 
} 

void Extraterrestre::listar(const Extraterrestre et)
{
 int i, qtndOlhos = 0, agressividade = 0; 
 string nome, raca, poder,  fraqueza, valioso;
/*
   nome = et->getNome() ;  
   raca = et->getRaca() ; 
   poder = et->getPoder();
   agressividade = et->getAgressividade();
   fraqueza = et->getFraqueza();
   qtndOlhos = et->getQntdOlhos();
   valioso = et->getValioso();
	*/
	
   nome = et.getNome() ;  
   raca = et.getRaca() ; 
   poder = et.getPoder();
   agressividade = et.getAgressividade();
   fraqueza = et.getFraqueza();
   qtndOlhos = et.getQntdOlhos();
   valioso = et.getValioso();
	
   cout <<"Nome: "<< nome << endl;       
   cout <<"Raca: "<< raca<< endl;  
   cout <<"Poder: "<< poder << endl;   
   cout <<"Nivel de agressividade: "<< agressividade << endl;        
   cout <<"Fraqueza: "<<fraqueza << endl;   
   cout <<"Quantidade de olhos: "<< qntdOlhos  << endl;        
   cout <<"Considera valioso: "<< valioso  << endl; 
   cout <<endl;    
  }	 

void menuPrincipal()
{
 cout << "==============================================" << endl;	
 cout << "Digite uma das opções abaixo:" << endl;
 cout << "1 - Adicionar um extraterrestre" << endl;
 cout << "2 - Listar extraterrestres" << endl;
 cout << "3 - Limpar tela" << endl;
 cout << "0 - Sair do programa" << endl;
 cout << endl;
}

