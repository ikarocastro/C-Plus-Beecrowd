#include <iostream>

using namespace std;

int main(){
    int peça1;
    int peça2;
    int quantidade1;
    int quantidade2;
    double valorUnitário1;
    double valorUnitário2;

    cin >> peça1 >> quantidade1 >> valorUnitário1 >> peça2 >> quantidade2 >> valorUnitário2;

    double valor1 =  quantidade1 * valorUnitário1;
    double valor2 = quantidade2 * valorUnitário2;

    double valorTotal = valor1 + valor2;

    cout.precision(2);
    cout << fixed << "VALOR A PAGAR: R$ " << valorTotal << endl;

    return 0;
}