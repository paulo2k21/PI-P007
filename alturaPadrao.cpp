/*Escreva um programa que imprima os seguintes padrões de acordo com a
entrada, que define a altura do padrão. Para os exemplos abaixo a entrada
foi 4:

* * * *
* * * *
* * * *
* * * *

*
* *
* * *
* * * *

* * * *
*     *
*     *
* * * *

*/
#include <iostream>
#include <string>

using namespace std;

int main(void)
{

    int numInserido;

    int aux = 0;

    cout << "Digite um número inteiro para definir a altura dos padrões." << endl;
    cin >> numInserido;

    // Gerando primeiro padrão
    for (int i = 0; i < numInserido; i++)
    {

        for (int i = 0; i < numInserido; i++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    // Gerando segundo padrão
    while (aux <= numInserido)
    {

        for (int j = 1; j <= aux; j++)
        {

            cout << "* ";
        }

        cout << " " << endl;

        aux++;
    }

    cout << " " << endl;

    aux = 1;

    // Gerando terceiro padrão
    for (int i = 1; i <= numInserido; i++)
    {

        if (i == 1)
        {

            for (int i = 1; i <= numInserido; i++)
            {
                cout << "* ";
            }
        }
        // Gerando terceiro padrão
        if (i != 1 && i != numInserido)
        {
            cout << "*";

            int y = numInserido - 1;
            for (int i = 1; i < y; i++)
            {
                cout << "  ";
            }

            cout << " *";
        }

        if (i == numInserido)
        {

            for (int i = 1; i <= numInserido; i++)
            {
                cout << "* ";
            }
        }

        cout << endl;
    }

    return (0);
}