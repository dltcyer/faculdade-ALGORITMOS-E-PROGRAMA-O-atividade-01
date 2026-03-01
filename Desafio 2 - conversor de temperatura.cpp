#include <iostream>
#include <iomanip>
using namespace std;

double conversor(double temp_celsius) // Função para converter a temperatura de Celsius para Fahrenheit
{
    double temp_fahren;
    double ultilitario = 1.8;

    temp_fahren = (temp_celsius * ultilitario) + 32;

    return temp_fahren;
}

int main()
{
    double temperatura;
    cout << "digite a temperatura atual(celsius):" << endl;
    cin >> temperatura;

    double resultado = conversor(temperatura); // Chama a função conversor para obter a temperatura em Fahrenheits

    cout << "A temperatura atual em fahrenheit: " << fixed << setprecision(2) << resultado;

    return 0;
}