/*Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2)
 e calcule a distância entre eles, mostrando 4 casas decimais, segundo a fórmula:

Distancia = sqrt(pow(x2-x1,2) + pow(y2-y1,2))

ENTRADA
O arquivo de entrada contém duas linhas de dados. A primeira linha contém dois valores de ponto flutuante: x1 y1 e a segunda linha contém dois valores de ponto flutuante x2 y2.

SAÍDA
Calcule e imprima o valor da distância segundo a fórmula fornecida, considerando 4 casas decimais.
*/

#include <iostream>
#include <cmath> // para usar a função sqrt() e pow()
#include <iomanip> // para usar a função setprecision() e fixed

using namespace std;

int main(){
    double x1, y1, x2, y2, Distancia;

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    Distancia = sqrt(pow(x2-x1,2) + pow(y2-y1,2));

    cout << fixed << setprecision(4) << Distancia << endl;

    return 0;
}

/* A função sqrt() é usada para calcular a raiz quadrada, e a função pow() é usada para calcular a potência.
 A função setprecision() é usada para definir o número de casas decimais a serem exibidas,
 e a função fixed é usada para garantir que o número seja exibido com um ponto decimal fixo.*/

 /*pow(base, expoente)
    Calcula potencia
        pow(x2 - x1, 2)  // equivale a (x2 - x1)²
        pow(y2 - y1, 2)  // equivale a (y2 - y1)²
 
    Internamente faz: (x2 - x1) × (x2 - x1)
 */

 /*sqrt(valor)
    Calcula a raiz quadrada 
        sqrt(pow(x2-x1,2) + pow(y2-y1,2))
         √( (x2-x1)² + (y2-y1)² )
 
*/