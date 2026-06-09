/*Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”.
 Utilize a fórmula:

                MaiorAB = (a + b + abs(a - b)) / 2

Obs.: a fórmula apenas calcula o maior entre os dois primeiros (a e b). Um segundo passo, portanto é necessário para chegar no resultado esperado.

ENTRRADA
O arquivo de entrada contém três valores inteiros.

SAÍDA
Imprima o maior dos três valores seguido por um espaço e a mensagem "eh o maior".
*/

#include <iostream>
#include <cmath> // biblioteca para usar a função abs() que calcula o valor absoluto de um número

using namespace std;

int main(){
    int a, b, c;


cin >> a >> b >> c;

int maiorAB = (a + b + abs(a - b)) / 2;
int maior = (maiorAB + c + abs(maiorAB-c)) / 2;

cout << maior << " eh o maior" << endl;

// abs() significa (valor absoluto), O valor absoluto é a distância de um número até o zero, sem considerar se ele é positivo ou negativo.
// Por exemplo, o valor absoluto de -5 é 5, e o valor absoluto de 5 também é 5. O valor absoluto de 0 é 0.
// sempre retorna um número positivo ou zero, independentemente do sinal do número original.


    return 0;
}