/*Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica,
 e informe-o expresso no formato horas:minutos:segundos.

ENTRADA
O arquivo de entrada contém um valor inteiro N.

SAÍDA
Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, conforme exemplo fornecido.
*/

#include <iostream>

using namespace std;

int main(){
    int valor, horas, minutos, segundos;
    
    cin >> valor;

    horas = valor / 3600;
    valor = valor % 3600;
    minutos = valor / 60;
    valor = valor % 60;
    segundos = valor / 1;
    
    cout << horas << ":" << minutos << ":" << segundos << endl;

    return 0;
}

// 1 hr = 3600 s
// 1 min = 60 s
// 1 s = 1 s

// % é a sobra 