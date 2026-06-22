/*A tarefa aqui neste problema é ler uma expressão matemática na forma de dois números Racionais (numerador / denominador)
e apresentar o resultado da operação. Cada operando ou operador é separado por um espaço em branco.
A sequência de cada linha que contém a expressão a ser lida é: número, caractere, número, caractere, número, caractere, número.
A resposta deverá ser apresentada e posteriormente simplificada.
Deverá então ser apresentado o sinal de igualdade e em seguida a resposta simplificada.
No caso de não ser possível uma simplificação, deve ser apresentada a mesma resposta após o sinal de igualdade.

Considerando N1 e D1 como numerador e denominador da primeira fração, segue a orientação de como deverá ser realizada cada uma das operações:
Soma: (N1*D2 + N2*D1) / (D1*D2)
Subtração: (N1*D2 - N2*D1) / (D1*D2)
Multiplicação: (N1*N2) / (D1*D2)
Divisão: (N1/D1) / (N2/D2), ou seja (N1*D2)/(N2*D1)

ENTRADA
A entrada contem vários casos de teste.
A primeira linha de cada caso de teste contem um inteiro N (1 ≤ N ≤ 1*104),
indicando a quantidade de casos de teste que devem ser lidos logo a seguir.
Cada caso de teste contém um valor racional X (1 ≤ X ≤ 1000), uma operação (-, +, * ou /) e outro valor racional Y (1 ≤ Y ≤ 1000).

SAÍDA
A saída consiste em um valor racional, seguido de um sinal de igualdade e outro valor racional,
que é a simplificação do primeiro valor. No caso do primeiro valor não poder ser simplificado,
o mesmo deve ser repetido após o sinal de igualdade.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

    // MDC Algoritmo de Euclides — divide sucessivamente até o resto ser 0.
int mdc(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n1, d1, n2, d2;
        char barra1, barra2, op;
        cin >> n1 >> barra1 >> d1 >> op >> n2 >> barra2 >> d2;

        int num, den;

        if (op == '+') {
            num = n1 * d2 + n2 * d1;
            den = d1 * d2;
        } else if (op == '-') {
            num = n1 * d2 - n2 * d1;
            den = d1 * d2;
        } else if (op == '*') {
            num = n1 * n2;
            den = d1 * d2;
        } else { // divisão
            num = n1 * d2;
            den = n2 * d1;
        }

        // Imprime resultado bruto
        cout << num << "/" << den << " = ";

        // Ajusta sinal: denominador sempre positivo
        if (den < 0) {
            num = -num;
            den = -den;
        }

        // Simplifica
        int g = mdc(abs(num), abs(den));
        num /= g;
        den /= g;
        // ABS significa valor absoluto — ou seja, sempre retorna o número sem sinal (positivo).

        cout << num << "/" << den << "\n";
    }

    return 0;
}

/*Por que usamos no código?
O MDC só faz sentido com números positivos.
Se o numerador for -8 e o denominador 4, o MDC entre eles é 4 — mas o algoritmo de Euclides pode se perder com negativos.*/

