#include <iostream>

int main() {
    int a, b, c;

    std::cout << "Digite o valor de a: ";
    std::cin >> a;

    std::cout << "Digite o valor de b: ";
    std::cin >> b;

    if (b != 0) {
        c = a / b;
        std::cout << "O quociente da divisão entre a e b é: " << c << std::endl;
    } else {
        std::cout << "Divisão por zero não é possível. Por favor, insira um valor diferente de zero para b." << std::endl;
    }

    return 0;
}
