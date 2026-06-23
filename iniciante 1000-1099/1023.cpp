/*Devido às constantes estiagens que aconteceram nos últimos tempos em algumas regiões do Brasil,
o governo federal criou um órgão para a avaliação do consumo destas regiões com finalidade de verificar o comportamento da população na época de racionamento.
Este órgão responsável irá pegar algumas cidades (por amostragem) 
e verificará como está sendo o consumo de cada uma das pessoas da cidade e o consumo médio de cada cidade por habitante.

ENTRADA
A entrada contém vários casos de teste. A primeira linha de cada caso de teste contém um inteiro N (1 ≤ N ≤ 1*106),
indicando a quantidade de imóveis. As N linhas contém um par de valores X (1 ≤ X ≤ 10) e Y (1 ≤ Y ≤ 200),
indicando a quantidade de moradores de cada imóvel e o respectivo consumo total de cada imóvel (em m3).
Com certeza, nenhuma residência consome mais do que 200 m3 por mês. O final da entrada é representado pelo número zero.

SAÍDA
Para cada entrada, deve-se apresentar a mensagem “Cidade# n:”,
onde n é o número da cidade seguindo a sequência (1, 2, 3, ...) e em seguida deve-se listar,
por ordem ascendente de consumo, a quantidade de pessoas seguido de um hífen e o consumo destas pessoas,
arredondando o valor para baixo. Na terceira linha da saída deve-se mostrar o consumo médio por pessoa da cidade,
com 2 casas decimais sem arredondamento, considerando o consumo real total.
Imprimir uma linha em branco entre dois casos de teste consecutivos. No fim da saída não deve haver uma linha em branco.
*/

#include <iostream>
#include <iomanip>
#include <map>
#include <cmath>

using namespace std;

int main(){

    int n, caseNum = 1;
    
    while (cin >> n && n){
        map<int, int> mp;
        long long tp = 0, tc = 0;  

        for (int i = 0; i < n; i++){
            int x, y;
            cin >> x >> y;
            int c = y / x; // consumo por pessoa, arredondando para baixo
            mp[c] += x;
            tp += x;
            tc += y;
        }
        
        if(caseNum > 1) cout << "\n";
        cout << "Cidade# " << caseNum++ << ":\n";

        bool first = true;
        for (auto it = mp.begin(); it != mp.end(); ++it){
            int c = it->first;
            int p = it->second;
            if (!first) cout << " ";
            cout << p << "-" << c;
            first = false;
        }
          double media = floor((double)tc / tp * 100) / 100;
          cout << "\nConsumo medio: " << fixed << setprecision(2) << media << " m3.\n";
    }
    
    return 0;
}