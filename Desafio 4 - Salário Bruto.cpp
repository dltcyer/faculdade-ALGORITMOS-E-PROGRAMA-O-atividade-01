#include <iostream>
#include <string>

using namespace std;

class bodyCalculo
{
private:
    double valorHora;
    int dias, horas;

public:
    void setValores(double VH, int ds, int hr)
    {
        valorHora = VH;
        dias = ds;
        horas = hr;
    }

    double calculo()
    {
        if (horas > 10)
        {
            cout << "Não é permitido trabalhar mais de 10 horas por dia." << endl;
            return 0;
        }
        else if (valorHora <= 0)
        {
            cout << "Trabalho escravo não é legalizado" << endl;
            return 0;
        }

        int horasTotais = horas * dias;
        return horasTotais * valorHora;
    }
};

int main()
{

    bodyCalculo classCalculo;

    string nome;
    double valorHora;
    int dias, horas;
    //----------------------------------
    cout << "Qual seu nome?" << endl;
    cin >> nome;
    do
    {
        cout << "Olá," << nome << ". " << "Quantos dias foram trabalhados? " << endl;
        cin >> dias;
        if (dias <= 0 || dias > 32)
        {
            cout << "Dia inválidos";
        };
    } while (dias <= 0 || dias > 32);
    //----------------------------------
    do
    {
        cout << nome << ", Quantas horas foram trabalhadas por dia? " << endl;
        cin >> horas;
        if (horas <= 0 || horas > 10)
        {
            cout << "Hora inválida";
        };
    } while (horas <= 0 || horas > 10);
    //----------------------------------
    do
    {
        cout << nome << ", Quanto você recebe por hora? " << endl;
        cin >> valorHora;
        if (valorHora <= 0)
        {
            cout << "valor da hora inválida";
        }

    } while (valorHora <= 0);
    //----------------------------------

    classCalculo.setValores(valorHora, dias, horas);

    double valorTotal = classCalculo.calculo();

    cout << nome << ", seu pagamento mensal será de: " << valorTotal << endl;
    return 0;
}