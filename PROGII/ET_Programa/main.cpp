#include "Extraterrestre.h"
#include <cstdlib>

using std::string;

int main()
{	
 
 int  opcao = 0;
 int qntdOlhos = 0, agressividade= 0;
 string nome, raca, poder , fraqueza , valioso;
 Extraterrestre et(nome, raca, poder, fraqueza, agressividade, qntdOlhos, valioso);;

 
 menuPrincipal();
 cin >> opcao;
 while(opcao != 0)
  switch(opcao)
  {
   case 1:
 		  cout << "Digite o nome do ET" << endl;
		  cin >> nome;
		  cout << "Digite a raca do ET" << endl;
		  cin >> raca;
		  cout << "Digite o poder do ET" << endl;
		  cin >> poder;
  	      cout << "Digite o nivel de agressividade do ET " << endl;		 
		  cin >> agressividade;
		  cout << "Digite a fraqueza do ET" << endl;
		  cin >> fraqueza;
		  cout << "Digite o numero de olhos do ET" << endl;
		  cin >> qntdOlhos;
		  cout << "O planeta dele necessita de: " << endl;
		  cin >> valioso;
          et.adicionar(et, nome, raca, poder, fraqueza, agressividade, qntdOlhos, valioso);	 
  		 menuPrincipal();
		 cin >> opcao; 
   break;
   case 2:
 		 et.listar(et); 
 		 menuPrincipal();
		 cin >> opcao; 	
   break;
   case 3:
		 system("cls");
		 menuPrincipal();
		 cin >> opcao; 		
   break;	 
   case 0:
		 system("pause");
		 return 0;
   break;
   default:
		 cout << "Mensagem: Erro na leitura de dados" << endl;
		 menuPrincipal();
		 cin >> opcao; 
   break;
  }
 
 system("pause");
 return 0;
}