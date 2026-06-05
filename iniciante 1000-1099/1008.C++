/*Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas, 
o valor que recebe por hora e calcula o salário desse funcionário. A seguir, mostre o número e o salário do funcionário,
 com duas casas decimais.

ENTRADA
O arquivo de entrada contém 2 números inteiros e 1 número com duas casas decimais, representando o número, quantidade de horas trabalhadas e o valor que o funcionário recebe por hora trabalhada, respectivamente.

SAÍDA
Imprima o número e o salário do funcionário, conforme exemplo fornecido, com um espaço em branco antes e depois da igualdade. No caso do salário, também deve haver um espaço em branco após o $.
*/

#include <iostream>
#include <iomanip> //biblioteca para usar o fixed e o precision

using namespace std;

int main(){
    int numero, horasTrabalhadas;
    double valorHora, salario;

    cin >> numero >> horasTrabalhadas >> valorHora;

    salario = horasTrabalhadas * valorHora;

    cout << "NUMBER = " << numero << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salario << endl;

    return 0;
 
}