#include <iostream>
#include <cmath>
#include <cassert>

using namespace std;

float ajustarInflacao(double valorInicial, double taxaInflacao, int anos) {
    return valorInicial * pow(1 + taxaInflacao, anos);
}

void teste() {
    assert(ajustarInflacao(1500, 0, 10) == 1500);
    assert(ajustarInflacao(2000, 1, 2) == 8000);
    assert(ajustarInflacao(100000, 0, 15) == 100000);
}

int main() {
    teste();
    cout << "Tudo OK!" << endl;
    return 0;
}
