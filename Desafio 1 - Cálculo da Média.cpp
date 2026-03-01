#include <iostream>
using namespace std;

class bodyMedia
{
private:
    int nota1, nota2, nota3;

public:
    void setValor(int nt1, int nt2, int nt3)
    {
        nota1 = nt1;
        nota2 = nt2;
        nota3 = nt3;
    }

    int acharMedia()
    {
        return (nota1 + nota2 + nota3) / 3;
    }
};

int main()
{

    bodyMedia media;
    int notas[3];
    for (int i = 0; i < 3; i++)
    {
        do
        {
            cout << "Digite a nota " << (i + 1) << " (0 a 10): ";
            cin >> notas[i];
            if (notas[i] < 0 || notas[i] > 10)
            {
                cout << "Nota inválida! Digite novamente." << endl;
            }
        } while (notas[i] < 0 || notas[i] > 10);
    }
    media.setValor(notas[0], notas[1], notas[2]);
    int valor = media.acharMedia();
    cout << "Sua média é: " << valor << endl;

    return 0;
}