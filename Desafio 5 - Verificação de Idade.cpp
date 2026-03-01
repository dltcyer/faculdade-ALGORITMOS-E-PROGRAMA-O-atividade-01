// Desafio 5 - Verificação de Idade

#include <iostream>
#include <string>
using namespace std;

class Eleitor
{
private:
	int anoe;
	int anonasc;

public:
	// Construtor
	// recebe os valores
	Eleitor(int eleicao, int nascimento)
	{
		anoe = eleicao;
		anonasc = nascimento;
	}
	// verifica se e verdadeiro ou falso
	bool podeVotar()
	{
		return (anoe - anonasc) >= 18;
	}
};

int main()
{
	// recebe dados digitados e envia valores para classe eleitor
	int anoE, anoN;

	do
	{
		cout << "Informe o ano da proxima eleicao: ";
		cin >> anoE;
		if (anoE < 1900 || anoE > 2027)
		{
			cout << "Informe um ano entre 1900 e 2027.\n";
		}
	} while (anoE < 1900 || anoE > 2027);

	do
	{
		cout << "Informe o ano de nascimento da pessoa: ";
		cin >> anoN;
		if (anoN < 1900 || anoN > 2027)
		{
			cout << "Informe um ano entre 1900 e 2027.\n";
		}
	} while (anoN < 1900 || anoN > 2027);

	// Criando objeto
	Eleitor pessoa(anoE, anoN);

	if (pessoa.podeVotar())
	{
		cout << "Esta pessoa pode votar.";
	}
	else
	{
		cout << "Esta pessoa ainda nao pode votar.";
	}

	return 0;
}