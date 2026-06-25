/*Solicitaram para que você construisse um programa simples de criptografia.
Este programa deve possibilitar enviar mensagens codificadas sem que alguém consiga lê-las.
O processo é muito simples. São feitas três passadas em todo o texto.

Na primeira passada, somente caracteres que sejam letras minúsculas e maiúsculas devem ser deslocadas 3 posições para a direita,
segundo a tabela ASCII: letra 'a' deve virar letra 'd', letra 'y' deve virar caractere '|' e assim sucessivamente.
Na segunda passada, a linha deverá ser invertida. Na terceira e última passada,
todo e qualquer caractere a partir da metade em diante (truncada) devem ser deslocados uma posição para a esquerda na tabela ASCII.
Neste caso, 'b' vira 'a' e 'a' vira '`'.

Por exemplo, se a entrada for “Texto #3”,
o primeiro processamento sobre esta entrada deverá produzir “Wh{wr #3”.
O resultado do segundo processamento inverte os caracteres e produz “3# rw{hW”.
Por último, com o deslocamento dos caracteres da metade em diante, o resultado final deve ser “3# rvzgV”.

ENTRADA
A entrada contém vários casos de teste. A primeira linha de cada caso de teste contém um inteiro N (1 ≤ N ≤ 1*104), indicando a quantidade de linhas que o problema deve tratar. As N linhas contém cada uma delas M (1 ≤ M ≤ 1*103) caracteres.

SAÍDA
Para cada entrada, deve-se apresentar a mensagem criptografada.*/

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main(){
    int n;

    cin >> n;
    cin.ignore(); // para ignorar os "\n"

    while (n--){
        string linha;
        getline(cin, linha);
        
        int len = linha.size();

        // Passada 1: shift +3 só em letras!

        for(char& c : linha){
            if (isalpha(c))
            {
                c += 3;
            }
        }

        reverse(linha.begin(), linha.end());

        int mid = len/2;
        for (int i = mid; i < len; i++)
        {
            linha[i] -= 1;
        }

        cout << linha << '\n';
        
    }
    


    return 0;
}

// "isalpha" É uma função da biblioteca <cctype> que verifica se um caractere é uma letra (maiúscula ou minúscula).
//Ela retorna:

/*valor diferente de 0 (verdadeiro) → se for letra a-z ou A-Z
0 (falso) → se for qualquer outra coisa*/