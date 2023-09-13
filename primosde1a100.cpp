/*Escreva um programa em C++ que imprima todos os números primos de 1 a
100.*/
#include <iostream>
#include <string>

using namespace std;

int main(void)
{

    int aux = 1;

    for (int i = 1; i <= 100; i++)
    {

        aux = 0;
        for (int j = 1; j <= 100; j++)
        {
            if (i % j == 0)
            {
                aux++;
            }
        }

        if (aux == 2)
        {
            cout << i << " - " << endl;
        }
    }

    return (0);
}