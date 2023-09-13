/*Escreva um programa em C++ que leia um número inteiro e verifique se ele
é um número armstrong. Um número armstrong (ou narcisista) é um número
que é igual à soma de seus próprios dígitos elevados à quantidade de
dígitos. Por exemplo, 153 é um número armstrong porque 1³ + 5³ + 3³ = 153.
*/
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int numInserido;

int main(void)
{

    int numInserido, aux, contador, numSeparados, numArmstrong = 0;

    cout << "Insira um número inteiro: " << endl;
    cin >> numInserido;
    aux = numInserido;
    contador = 0;

    while (aux > 0)
    {
        aux = aux / 10;
        contador++;
    }

    aux = numInserido;

    while (aux > 0)
    {

        if (aux == 1)
        {
            numArmstrong = numArmstrong + 1;
        }

        numSeparados = aux % 10;

        numArmstrong = numArmstrong + pow(numSeparados, contador);

        aux = aux / 10;
    }

    if (numInserido == numArmstrong)
    {

        cout << numInserido << " é um número Armstrong." << endl;
    }
    else
    {

        cout << numInserido << " Não é um número Armstrong." << endl;
    }

    return (0);
}