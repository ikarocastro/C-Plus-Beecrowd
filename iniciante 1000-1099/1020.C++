/*Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias

Obs.: apenas para facilitar o cálculo, considere todo ano com 365 dias e todo mês com 30 dias. Nos casos de teste nunca haverá uma situação que permite 12 meses e alguns dias, como 360, 363 ou 364. Este é apenas um exercício com objetivo de testar raciocínio matemático simples.

ENTRADA
O arquivo de entrada contém um valor inteiro.

SAÍDA
Imprima a saída conforme exemplo fornecido.
*/

#include <iostream>

using namespace std;

int main(){
    int valor, anos, meses, dias;

     cin >> valor;

    anos = valor / 365;
    valor = valor % 365;
    meses = valor / 30;
    valor = valor % 30;
    dias = valor / 1;

    cout << anos << " ano(s)" << endl; 
    cout << meses << " mes(es)" << endl;
    cout << dias << " dia(s)" << endl;

    return 0;
}

// Código feito 100% raciocio baseado na conversão de valores e dos dados da resolução 1019

/*
anos  = dias / 365
resto = dias % 365

meses = resto / 30
dias  = resto % 30
*/