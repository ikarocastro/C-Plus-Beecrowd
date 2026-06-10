/* 1014 - Consumo

Calcule o consumo médio de um automóvel sendo fornecidos a distância total percorrida (em Km) e o total de combustível gasto (em litros).

ENTRADA
O arquivo de entrada contém dois valores: um valor inteiro X representando a distância total percorrida (em Km), e um valor real Y representando o total de combustível gasto, com um dígito após o ponto decimal.

SAÍDA
Apresente o valor que representa o consumo médio do automóvel com 3 casas após a vírgula, seguido da mensagem "km/l".
*/


#include <iostream>

using namespace std;

int main(){
    int DistToPerc;
    double CombusGasto, ConsumoMedio;

    cin >> DistToPerc >> CombusGasto;

    ConsumoMedio = DistToPerc / CombusGasto;
    cout.precision(3);
    cout << fixed << ConsumoMedio << " km/l" << endl;

    return 0;
}