// Dado um vetor A de tamanho N, ordenado de forma crescente:
// Implemente o algoritmo de busca binária na forma iterativa.
// A complexidade temporal no pior caso e melhor caso é a mesma que a versão recursiva?
// Qual a complexidade espacial e temporal para a versão recursiva e iterativa?
// Teste o algoritmo para diferentes casos de entrada, variando o tamanho e conteúdo do vetor.

#include <iostream>
#include <vector>
 
using namespace std;

int buscaBinariaIterativa(const vector<int>& vetor, int chave) {
  //definindo a função buscaBinariaIterativa que recebe dois parâmetros: um vetor int constante (const vector<int>& vetor) e um inteiro (int chave)
    int inicio = 0;
  //índice inicial do vetor onde inicia a busca
    int fim = vetor.size() - 1;
  //índice final do vetor onde terminaremos a busca
    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;
  //característica fundamental da busca binária, onde dividimos o intervalo de busca ao meio a cada iteração
        if (vetor[meio] == chave)
            return meio;
        else if (vetor[meio] < chave)
            inicio = meio + 1;
        else
            fim = meio - 1;
    }

    return -1; //chave não encontrada
}

int main() {
    vector<int> vetor = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int chave = 5;

    int indice = buscaBinariaIterativa(vetor, chave);
    if (indice != -1)
        cout << "Chave encontrada no índice " << indice << endl;
    else
        cout << "Chave não encontrada." << endl;

    return 0;
}
