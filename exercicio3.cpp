#include <iostream>
using namespace std;

// Exercício 3
// Dado um vetor de entrada A de tamanho N.
// ● Implemente um algoritmo que verifica se o vetor está
// ordenado na forma crescente.
// ○ Caso o vetor esteja ordenado o algoritmo retorna
// verdadeiro.
// ○ Caso contrário o algoritmo retorna falso.

bool verificadorOrdenacao(int* vetor, int n) {
    for(int i = 0; i < (n-1); i++){
      if(vetor[i] > vetor[i + 1]){
        return false;
      }
    }

    return true;
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8};

    int resultado = verificadorOrdenacao(vetor, 8);

    cout << resultado << endl;
    return 0;
}

