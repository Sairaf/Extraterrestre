#include <iostream>
#include <string>
#define MAXIMO 30

using namespace std;

class Extraterrestre
{
private:

	string nome;
	string raca;
	string poder;
	int agressividade;
	string fraqueza;
	string valioso;
	int qntdOlhos;

public:

	Extraterrestre();
	Extraterrestre(string, string, string,  string,int, int, string);

	void setNome(const string&);
    void setRaca(const string&);
	void setPoder(const string&);
	void setFraqueza(const string&);
    void setAgressividade(const int&);
	void setQntdOlhos(const int&);          
	void setValioso(const string&);
	      //getters 
    string getNome() const;
    string getRaca() const;
    string getPoder() const;
    string getFraqueza() const;
	int getAgressividade() const;
	string getValioso() const;
	int getQntdOlhos() const;          
    
					
   void listar(const Extraterrestre); 
   void adicionar(Extraterrestre, const string,const string,const string,const string, const int,const int, const string );
   //void invadir()
};

void menuPrincipal();

