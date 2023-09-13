/*Desenvolva um programa que receba a matrícula (apenas números) e 3
notas de um grupo de alunos. A cada aluno cadastrado o programa deve
perguntar se deseja prosseguir com outro. Em seguida, calcule a média de
cada aluno e imprima os dados da seguinte forma:
MATRICULA  NOTA1 NOTA2 NOTA3 MEDIA
===========================================
123456789  10.0  8.0   9.9    8.5
MATRICULA  NOTA1 NOTA2 NOTA3 MEDIA
===========================================
123456789  10.0  8.0   9.9    8.5
MATRICULA  NOTA1 NOTA2 NOTA3  MEDIA
===========================================
123456789  10.0   8.0    9.9    8.5
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(void)
{
    int x = 0;
    int l = 0;

    float boletimAluno[10][5];

    do
    {

        cout << "Inserindo o aluno " << l + 1 << endl;

        cout << "Digite a matrícula do aluno: " << endl;

        cin >> boletimAluno[l][0];

        cout << "Digite a primeira nota do aluno: " << endl;

        cin >> boletimAluno[l][1];

        cout << "Digite a segunda nota do aluno: " << endl;

        cin >> boletimAluno[l][2];

        cout << "Digite a terceira nota do aluno: " << endl;

        cin >> boletimAluno[l][3];

        l++;

        cout << "Para concluir o cadastro de alunos digite 1 ou 2 para inserir mais." << endl;

        cin >> x;

    } while (x != 1);

    for (int i = 0; i < l; i++)
    {
        cout << "MATRICULA   NOTA1    NOTA2    NOTA3    MEDIA  " << endl;
        cout << "==============================================" << endl;

        cout << boletimAluno[i][0] << "      " << boletimAluno[i][1] << "       " << boletimAluno[i][2] << "       " << boletimAluno[i][3] << "      " << setprecision(2) << (boletimAluno[i][1] + boletimAluno[i][2] + boletimAluno[i][3]) / 3 << endl;
    }

    return (0);
}