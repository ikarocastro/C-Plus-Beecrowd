/*Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de notas necessárias.

ENTRADA
O arquivo de entrada contém um valor de ponto flutuante N (0 ≤ N ≤ 1000000.00).

SAÍDA
Imprima a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, conforme exemplo fornecido.
*/

#include <iostream>
#include <cmath> // Funções matemáticas como round() que arredonda o double para o inteiro mais próximo
#include <iomanip> // Serve para formatar a saída. tipo 0.50 -> "0.50" e não "0.5"
using namespace std;

int main(){

    double valor;
    cin >> valor;

    int centavos = (int)round(valor * 100);

    int notas[]  = {10000, 5000, 2000, 1000, 500, 200};
    int moedas[] = {100, 50, 25, 10, 5, 1};

    double valNotas[]  = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00};
    double valMoedas[] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};

    cout << "NOTAS:" << endl;
    for (int i = 0; i < 6; i++) {
        int qtd = centavos / notas[i];
        centavos = centavos % notas[i];
        cout << qtd << " nota(s) de R$ " << fixed << setprecision(2) << valNotas[i] << endl;
    }

    cout << "MOEDAS:" << endl;
    for (int i = 0; i < 6; i++) {
        int qtd = centavos / moedas[i];
        centavos = centavos % moedas[i];
        cout << qtd << " moeda(s) de R$ " << fixed << setprecision(2) << valMoedas[i] << endl;
        
    }

    return 0;

}