/*Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto.
 As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação de notas necessárias.

ENTRADA
O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).

SAÍDA
Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias, conforme o exemplo fornecido. Não esqueça de imprimir o fim de linha após cada linha, caso contrário seu programa apresentará a mensagem: “Presentation Error”.
*/

#include <iostream>

using namespace std;

int main(){
    
    int valor, notas100, notas50, notas20, notas10, notas5, notas2, notas1;

    cin >> valor;
    cout << valor << endl;

    notas100 = valor / 100;
    valor = valor % 100;
    notas50 = valor / 50;
    valor = valor % 50;
    notas20 = valor / 20;
    valor = valor % 20;
    notas10 = valor / 10;
    valor = valor % 10;
    notas5 = valor / 5;
    valor = valor % 5;
    notas2 = valor / 2;
    valor = valor % 2;
    notas1 = valor / 1;
    

    cout << notas100 << " nota(s) de R$ 100,00" << endl;
    cout << notas50 << " nota(s) de R$ 50,00" << endl;
    cout << notas20 << " nota(s) de R$ 20,00" << endl;
    cout << notas10 << " nota(s) de R$ 10,00" << endl;
    cout << notas5 << " nota(s) de R$ 5,00" << endl;
    cout << notas2 << " nota(s) de R$ 2,00" << endl;
    cout << notas1 << " nota(s) de R$ 1,00" << endl;



    return 0;
}