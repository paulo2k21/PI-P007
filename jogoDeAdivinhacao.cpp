/*Escreva um programa em C++ que simule um jogo de adivinhação. O
programa deve gerar um número aleatório entre 1 e 100, e o usuário deve
tentar adivinhar esse número. O jogo deve informar se o palpite está alto,
baixo ou correto, e continuar até que o usuário acerte o número.*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(void)
{

    unsigned seed = time(0);

    int numAleatorio;
    int numInserido;
    int x = 0;

    srand(seed);
    numAleatorio = 1 + rand() % 100;

    cout << "Bem vindo ao nosso jogo de adivinhação!" << endl;

    cout << "Nesse jogo você de tentará adivinhar qual o número que estou pensando." << endl;

    cout << "Boa sote!" << endl;

    do
    {

        cout << "Qual número estou pensando?" << endl;
        cin >> numInserido;

        if (numAleatorio == numInserido)
        {

            cout << "Parabéns você acertou! O número que estou pensando é " << numAleatorio << endl;

            x = 1;
        }

        if (numAleatorio > numInserido)
        {

            cout << "Errou! Mas não desanime, tente novamente." << endl;

            cout << "O número inserido é menor que o número que estou pensando." << endl;
        }

        if (numAleatorio < numInserido)
        {
            cout << "Errou! Mas não desanime, tente novamente." << endl;

            cout << "O número inserido é maior que o número que estou pensando." << endl;
        }

    } while (x != 1);

    return (0);
}