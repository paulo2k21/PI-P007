/*Escreva um programa em C++ que leia um número inteiro e determine se
ele é um número perfeito. Um número perfeito é aquele cuja soma dos seus
divisores, excluindo ele mesmo, é igual ao próprio número.*/
#include <iostream>
#include <string>

using namespace std;

int main(void)
{

    int numInserido;
    int somaNumInserido = 0;

    cout << "Digite um número: ";
    cin >> numInserido;
    cout << endl;

    for (int i = 1; i < numInserido; i++)
    {

        if (numInserido % i == 0)
        {

            somaNumInserido = somaNumInserido + i;
        }
    }

    if (somaNumInserido == numInserido)
    {
        cout << "O número inserido é um número perfeito." << endl;
    }
    else
    {

        cout << "O número inserido não é um número perfeito." << endl;
    }

    return (0);
}