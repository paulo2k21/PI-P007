/* Escreva um programa em C++ que leia um número inteiro e imprima a
sequência de Fibonacci até o número fornecido pelo usuário.
*/
#include <iostream>
#include <string>

using namespace std;

int main(void)
{

    int numInserido;
    int a, b, c;
    cout << "Insira um número inteiro:  ";
    cin >> numInserido;
    cout << endl;

    a = 1;
    b = 1;
    c = 1;

    cout << c << " - ";

    for (int i = 1; i <= numInserido; i++)
    {

        cout << c << " - ";
        c = a + b;
        a = b;
        b = c;
    }

    cout << "FIM";

    return (0);
}