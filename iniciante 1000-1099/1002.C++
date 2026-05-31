/* A fórmula para calcular a área de uma circunferência é: area = π . raio2. Considerando para este problema que π = 3.14159:
- Efetue o cálculo da área, elevando o valor de raio ao quadrado e multiplicando por π.*/

#include <iostream>

using namespace std;

int main() {
    double raio, area;
    cin >> raio;
    area = 3.14159 * (raio * raio);
    cout.precision(4);  // Define a precisão para 4 casas decimais
    cout << fixed << "A=" << area << endl;  // fixed para garantir que a saída seja formatada com a precisão definida
    return 0;


}