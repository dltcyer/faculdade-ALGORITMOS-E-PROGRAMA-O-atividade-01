#include <iostream>

using namespace std;

int media(int nota1, int nota2, int nota3)
{
    return (nota1 + nota2 + nota3) / 3;
}

int main()
{

    int nota1;
    int nota2;
    int nota3;

    cout << "Coloque o valor das 3 notas: " << endl;
    cin >> nota1;
    cout << "proxima nota" << endl;
    cin >> nota2;
    cout << "proxima nota" << endl;
    cin >> nota3;
    int valor = media(nota1, nota2, nota3);
    cout << "Sua média é: " << valor << endl;

    return 0;
}
