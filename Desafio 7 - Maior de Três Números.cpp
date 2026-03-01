// Desafio 7 - Maior de Três Números

#include <iostream>
#include <string>
using namespace std;

class Experimento
{
private:
	float num1, num2, num3;
	// Recebe os valores
public:
	Experimento(float n1, float n2, float n3)
	{
		num1 = n1;
		num2 = n2;
		num3 = n3;
	}
	// Calcula qual e o maior numero
	float calcularMaior()
	{
		float maior = num1;

		if (num2 > maior)
		{
			maior = num2;
		}

		if (num3 > maior)
		{
			maior = num3;
		}

		return maior;
	}
};

int main()
{
	// Recebe valores digitados
	// Envia os valores para "class experimento"
	float primeiro, segundo, terceiro;

	cout << "Digite o primeiro valor: ";
	cin >> primeiro;
	cout << "\nDigite o segundo valor: ";
	cin >> segundo;
	cout << "\nDigite o terceiro valor: ";
	cin >> terceiro;

	Experimento exp(primeiro, segundo, terceiro);

	cout << "\nO maior valor e: " << exp.calcularMaior();

	return 0;
}