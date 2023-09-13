/*Escreva um programa em C++ que imprima na tela os números de 1 a 100.
Porém, para múltiplos de 3, o programa deve imprimir "Fizz", e para
múltiplos de 5, deve imprimir "Buzz". Para números que são múltiplos de
ambos, imprimir "FizzBuzz".*/

#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    // Loop para imprimir de 1 até 100 números que sejam múltiplos de 3 e 5.
    for (int i = 1; i <= 100; i++)
    {

        // Condição para identificar se o número é múltiplos de 3 e 5.
        if (i % 3 == 0 && i % 5 == 0)
        {

            cout << i << " : FizzBuzz" << endl;
        }
        else
        {
            // Condição para identificar se o número é múltiplos de 3.
            if (i % 3 == 0)
            {
                cout << i << " : Fizz" << endl;
            }
            // Condição para identificar se o número é múltiplos de 5.
            if (i % 5 == 0)
            {

                cout << i << " : Buzz" << endl;
            }
        }
        // Condição para identificar se o número não é múltiplos de 3 e 5.
        if (i % 3 != 0 && i % 5 != 0)
        {

            cout << i << "." << endl;
        }
    }

    return (0);
}