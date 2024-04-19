#include <iostream>
using namespace std;

// Exercício 1
// Dado um vetor A de tamanho N, com valores inteiros e um valor inteiro X.
// ● Implemente um algoritmo de busca sequencial recursivo que retorna o indice do vetor caso X seja encontrado e -1 caso contrário.
int busca_sequencial(int* vetor, int x, int n, int rec) {
    if (rec >= n) {
        return -1;
    }

    if (vetor[rec] == x) {
        return rec;
    } else {
        return busca_sequencial(vetor, x, n, rec + 1);
    }
}

int main() {
    int vetor[] = {5, 3, 4, 2, 32, 1};

    int x;

    cout << "Digite qual número deseja encontrar:" << endl;
    cin >> x;

    int posicao = busca_sequencial(vetor, x, 6, 0);
    cout << posicao << endl;

    return 0;
}

