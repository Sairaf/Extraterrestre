#include <iostrean>
#include <csdlib>
#include <string>

using namespace std;

class Extraterrestre:
{
private:

	string nome;
	string raca;
	string poder;
	string agressividade;
	string fraqueza;
	int qntdOlhos;
public:

	void SetAgressividade(const string& agressividade) {
		this->agressividade = agressividade;
	}
	void SetFraqueza(const string& fraqueza) {
		this->fraqueza = fraqueza;
	}
	void SetNome(const string& nome) {
		this->nome = nome;
	}
	void SetPoder(const string& poder) {
		this->poder = poder;
	}
	void SetQntdOlhos(int qntdOlhos) {
		this->qntdOlhos = qntdOlhos;
	}
	void SetRaca(const string& raca) {
		this->raca = raca;
	}
	const string& GetAgressividade() const {
		return agressividade;
	}
	const string& GetFraqueza() const {
		return fraqueza;
	}
	const string& GetNome() const {
		return nome;
	}
	const string& GetPoder() const {
		return poder;
	}
	int GetQntdOlhos() const {
		return qntdOlhos;
	}
	const string& GetRaca() const {
		return raca;
	}

   void adicionar(Extraterrestre*[], const string, const string, const string, const string, const string,const int, cons int );
   void listar(Extraterrestre*[], const int);

}

   void menuprincipal();