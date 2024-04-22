#include <iostream>
using namespace std;

// Dado um valor inteiro positivo N.
// ● Implemente o algoritmo iterativo de fibonacci. De modo a
// retornar o valor inteiro X na posição N da sequência de
// fibonacci.

int fibonacci(int n) {
  if (n <= 1)
    return 1;

  int a = 0, b = 1, aux = 0;
  for (int i = 2; i <= n; i++) {
    aux = a + b;
    a = b;
    b = aux;
  }
  return b;
}

int main() {
  int entrada;

  cin >> entrada;

  cout << fibonacci(entrada);

  return 0;
}