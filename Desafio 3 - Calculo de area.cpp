#include <iostream>
#include <iomanip>

using namespace std;

double calculo(double raio, double pi = 3.14) // Função para calcular a área do círculo usando a fórmula A = π * r^2
{
    double area = pi * (raio * raio);

    return area;
}

int main()
{
    double valor_raio;

    cout << "Coloque o valor do raio: " << endl;
    cin >> valor_raio;

    double resultado = calculo(valor_raio); // Chama a função calculo para obter a área do círculo
    cout << "A area desde circulo é: " << fixed << setprecision(3) << resultado << endl;

    return 0;
}