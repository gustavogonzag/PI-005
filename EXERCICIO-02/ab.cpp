#include <iostream>

int main() {
    int a, b, c;

    std::cout << "Digite o valor de a: ";
    std::cin >> a;

    std::cout << "Digite o valor de b: ";
    std::cin >> b;

    // Verifica se a é maior que b usando o operador condicional (?)
    c = (a > b) ? a : b;

    std::cout << "O maior número entre a e b é: " << c << std::endl;

    return 0;
}
