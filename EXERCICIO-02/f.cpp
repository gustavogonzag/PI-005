#include <iostream>
#include <cmath> // Para std::abs

int main() {
    int a, b, c;

    std::cout << "Digite o valor de a: ";
    std::cin >> a;

    std::cout << "Digite o valor de b: ";
    std::cin >> b;

    c = std::abs(a - b);

    std::cout << "O valor absoluto da diferença entre a e b é: " << c << std::endl;

    return 0;
}
