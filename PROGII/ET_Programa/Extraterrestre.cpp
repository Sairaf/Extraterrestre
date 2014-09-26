#include <stdio.h>
#include "Extraterrestre.h"

Extraterrestre::Extraterrestre()
{
 this->nome = "default";
 this->raca = "default";
 this->poder = "default";
 this->nivelPoder = 0;
 this->agressividade = 0;
 this->fraqueza = "default";
 this->qntdOlhos = 0;
 this->valioso = "default";
}

Extraterrestre::Extraterrestre(const string nome,const string raca,const string poder,const int nPoder, const string fraquezaconst, int agressividade,const int qndOlhos, const string valioso)
{
 Extraterrestre::setNome(nome);
 Extraterrestre::setRaca(raca);
 Extraterrestre::setPoder(poder);
 Extraterrestre::setNivelPoder(nPoder);
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
	
void Extraterrestre::setNivelPoder(const int& nivelPoder) {
		this->nivelPoder = nivelPoder;
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
	
	int Extraterrestre::getNivelPoder() const{
		return nivelPoder;
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


void Extraterrestre::adicionar(Extraterrestre et, const string nome,const string raca,const string poder, const int nivelPoder, const string fraqueza,const int agressividade,const int qntdOlhos, const string valioso)
{
 setNome(nome);
 setRaca(raca);
 setPoder(poder);
 setNivelPoder(nivelPoder); 
 setAgressividade(agressividade);
 setFraqueza(fraqueza);
 setQntdOlhos(qntdOlhos);
 setValioso(valioso);
  
} 

void Extraterrestre::listar(const Extraterrestre et)
{
 int nPoder = 0, qntdOlhos = 0, agressividade ; 
 string nome, raca, poder,  fraqueza, valioso;

   nome = et.getNome() ;  
   raca = et.getRaca() ; 
   poder = et.getPoder();
   nPoder = et.getNivelPoder();
   agressividade = et.getAgressividade();
   fraqueza = et.getFraqueza();
   qntdOlhos = et.getQntdOlhos();
   valioso = et.getValioso();
	
   cout <<"Nome: "<< nome << endl;       
   cout <<"Raca: "<< raca<< endl;  
   cout <<"Poder: "<< poder << endl;   
   cout <<"Nivel do Poder : " << nPoder << endl;
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
 cout << "4 - Verificar nivel de ameaça extraterrestre" << endl;
 cout << "5 - Verificar quanto tempo o ET chegaria em nosso planeta" << endl;
 cout << "0 - Sair do programa" << endl;
 cout << endl;
}


const int Extraterrestre::calculo(Extraterrestre et, int aux,int tecnologia)
{
 return aux+2*(et.getNivelPoder() + et.getAgressividade()) - aux+2 * (tecnologia + 30);	
}


