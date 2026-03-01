#include <iostream>
using namespace std;

// Classe para classificar a nota
class ClassificacaoNota
{
private:
    float nota;

public:
    // Método para receber a nota
    void setNota(float n)
    {
        nota = n;
    }

    // Método para calcular o conceito
    char calcularConceito()
    {
        if (nota >= 9)
            return 'A';
        else if (nota >= 7)
            return 'B';
        else if (nota >= 5)
            return 'C';
        else if (nota >= 3)
            return 'D';
        else
            return 'E';
    }
};

int main()
{
    ClassificacaoNota aluno; // Cria um objeto da classe ClassificacaoNota para armazenar a nota do aluno e calcular o conceito
    float nota;

    do
    {
        cout << "Digite a nota do aluno: ";
        cin >> nota;
        if (nota < 0 || nota > 10)
            cout << "Nota inválida! Digite um valor entre 0 e 10." << endl;
    } while (nota < 0 || nota > 10);

    aluno.setNota(nota);

    cout << "Conceito: " << aluno.calcularConceito() << endl;

    return 0;
}