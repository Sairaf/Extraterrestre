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
	int nivelPoder;
	int agressividade;
	string fraqueza;
	string valioso;
	int qntdOlhos;

public:

	Extraterrestre();
	Extraterrestre(string, string, string,int, string, int, int, string);

          //setters
		  
	void setNome(const string&);
    void setRaca(const string&);
	void setPoder(const string&);
	void setNivelPoder(const int&);
	void setFraqueza(const string&);
    void setAgressividade(const int&);
	void setQntdOlhos(const int&);          
	void setValioso(const string&);
	
	      //getters 
		  
    string getNome() const;
    string getRaca() const;
    string getPoder() const;
	int getNivelPoder() const;
    string getFraqueza() const;
	int getAgressividade() const;
	string getValioso() const;
	int getQntdOlhos() const;          
    
    
   
   const int viagemAoPlaneta()
   {
	
    double anoLuz, tecnologia, distancia;
    cout << "Quantos anos luz o planeta se encontra "<< endl;
    cin >> anoLuz;
    cout << "Qual o nivel de tecologia daraca alienigina (de 0 a N)"<< endl;
    cin >> tecnologia;
    distancia =  (9460528410545.4362688 * anoLuz)/ (tecnologia * 10000);
    if(distancia == 0)
    {
     cout <<" JA CHEGOU SEU DISCO VOADOR!!!" << endl;	 
    }
    return distancia;
	
   };
 
   const int calculo(Extraterrestre, int, int);
   void listar(const Extraterrestre); 
   void adicionar(Extraterrestre, const string,const string,const string,const int, const string, const int,const int, const string );
   
   
};

inline void cabecalho()
{
 cout << "=========================" ;
 cout << "BEM-VINDO" ;	

}

void menuPrincipal();

inline void calculoInvasao(Extraterrestre et)
{

 string nomePlaneta, recursoAbundante, defesa;	
 int aux = 1, result, tecnologia = 0;
 cout << "Digite o nome do planeta a ser invadido" << endl;	
 cin >> nomePlaneta; 	
 cout << "Digite o recurso mais abundante do planeta: " << endl;
 cin >> recursoAbundante;
 cout << "Digite qual a principal forma de defesa do planeta: " << endl;
 cin >>  defesa;
 cout << "Digite o nivel tecnologico do planeta a ser invadido:  " << endl;
 cin >>  tecnologia;
 cout << endl;
 
 if(recursoAbundante == et.getValioso())
 {
  aux+=2;
 }
  if(defesa == et.getFraqueza())
  {
   aux++;	  
  }
  result = et.calculo(et, aux, tecnologia);
  
  cout << "Planeta " <<nomePlaneta<< ", suas chances de ser invadido são: " << endl;
  cout << endl;
  if(result <= 100)
  {
	cout << "Praticamente inofensiva" << endl;  
  }else if ((result > 100) &&( result <= 500))
  {
    cout << "Ameaca Extraterrestre baixa" << endl;  	  
  }else if ((result > 500) &&( result <= 1000))	  
  {
    cout << "Ameaca Extraterrestre media" << endl;  	  	  
  }else if ((result > 1000) &&( result <= 4000)) 
  {
   cout << "Ameaca Extraterrestre alta" << endl;  	  	  	  
  }else if ((result > 4000) &&( result <= 8000)) 
  {
   cout << "Tsoukalos nos avisou" << endl;  	  	  	  
  }else if (result > 8000) 
  {
   cout << "É DE MAIS DE 8000!!!!" << endl;  	  	  	  
  }	  
  	  
}


