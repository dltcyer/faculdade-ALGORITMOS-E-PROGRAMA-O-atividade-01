#include <iostream>
#include <string>

using namespace std;

double calculo(double valorHora, int horaPorDia, int dias)
{
    if (horaPorDia > 10)
    {
        cout << "Não é permitido trabalhar mais de 10 horas por dia." << endl;
        return 0;
    }
    else if (valorHora <= 0)
    {
        cout << "Trabalho escravo não é legalizado" << endl;
        return 0;
    }

    int horasTotais = horaPorDia * dias;
    return horasTotais * valorHora;
}

int main()
{
    string nome;
    double valorHora = 14.50;
    int horaPorDia;
    int dias;

    cout << "Quantos dias foram trabalhados?" << endl;
    cin >> dias;

    cout << "Quantas horas por dia?" << endl;
    cin >> horaPorDia;

    double bruto = calculo(valorHora, horaPorDia, dias);
    cout << "O valor bruto será: " << bruto << endl;

    return 0;
}