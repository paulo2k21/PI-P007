/*Escreva um programa em C++ que leia um número inteiro e imprima todos
os divisores desse número.*/
#include <iostream>
#include <string>

using namespace std;

int main(void)
{

    int num;

    cout << "Digite um número inteiro: " << endl;

    cin >> num;

    cout << "Números divisores de " << num << " são: " << endl;

    for (int i = 1; i < num; i++)
    {

        if (num % i == 0)
        {

            cout << i << " - ";
        }
    }
    cout << num;
    cout << endl;

    return (0);
}