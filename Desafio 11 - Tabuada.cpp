#include <iostream>
#include <random>

using namespace std;

int main()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(1, 10);

    int numero = dist(gen);
    int numero2 = dist(gen);
    int resposta;
    cout << "Quando é: " << numero << " x " << numero2 << " = ?" << endl;
    cin >> resposta;

    if (resposta == numero * numero2)
    {
        cout << "Parabens! Você acertou!" << endl;
    }
    else
    {
        cout << "Resposta errada. A resposta correta é: " << numero * numero2 << endl;
    }

    return 0;
}