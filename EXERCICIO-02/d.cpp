#include <iostream>
#include <iomanip> // Para std::oct

int main() {
    int a, b, c;

    std::cout << "Digite o valor de a: ";
    std::cin >> a;

    std::cout << "Digite o valor de b: ";
    std::cin >> b;

    c = a * b;

    std::cout << "O produto de a e b em formato octal é: " << std::oct << c << std::endl;

    return 0;
}
