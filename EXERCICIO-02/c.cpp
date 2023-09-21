#include <iostream>
#include <iomanip> // Para std::hex

int main() {
    int a, b, c;

    std::cout << "Digite o valor de a: ";
    std::cin >> a;

    std::cout << "Digite o valor de b: ";
    std::cin >> b;

    c = a + b;

    std::cout << "A soma de a e b em formato hexadecimal é: " << std::hex << c << std::endl;

    return 0;
}
