/*Escreva um programa em C++ que leia um número inteiro e verifique se ele
é um palíndromo. Um número é palíndromo se ele permanece o mesmo
quando seus dígitos são invertidos.*/

#include <iostream>
#include <string>

using namespace std;

int main(void)
{

    int num, aux, reverso;

    cout << "Digite um número inteiro: " << endl;
    cin >> num;

    aux = num;
    reverso = 0;

    // Loop para compara até a variável aux ser zero ou menor que zero.
    while (aux != 0)
    {

        // Calculo para guarda o resto e o quociente do valor da variável aux.
        reverso = reverso * 10 + aux % 10;
        aux = aux / 10;
    }

    // comparar o valor da variável reverso com o valor inserido pelo usuário.
    if (reverso == num)
    {

        // Imprimir caso o número seja um palindrome.
        cout << num << " é um palindrome. " << endl;
    }
    else
    {
        // Imprimir caso o número não seja um palindrome.
        cout << num << " Não é uma palindrome. " << endl;
    }
    return 0;
}