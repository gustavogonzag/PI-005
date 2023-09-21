#include <iostream>
#include <cctype>
#include <iomanip>

int main() {
    char ch1, ch2 = 81; // Atribui o valor 81 a ch2

    std::cout << "Digite um caractere: ";
    std::cin >> ch1;

    // Verifica se é uma letra maiúscula, minúscula, dígito ou outro tipo de caractere usando isupper, islower e isdigit
    bool isUpper = std::isupper(ch1);
    bool isLower = std::islower(ch1);
    bool isDigit = std::isdigit(ch1);

    std::cout << "O caractere digitado é: " << ch1 << std::endl;

    if (isUpper) {
        std::cout << "Tipo de caractere: Letra maiúscula" << std::endl;
    } else if (isLower) {
        std::cout << "Tipo de caractere: Letra minúscula" << std::endl;
    } else if (isDigit) {
        std::cout << "Tipo de caractere: Dígito" << std::endl;
    } else {
        std::cout << "Tipo de caractere: Outro tipo de caractere" << std::endl;
    }

    // Imprime o valor de ch2 em diferentes bases
    std::cout << "Valor de ch2 em decimal: " << static_cast<int>(ch2) << std::endl;
    std::cout << "Valor de ch2 em octal: " << std::oct << static_cast<int>(ch2) << std::endl;
    std::cout << "Valor de ch2 em hexadecimal: " << std::hex << static_cast<int>(ch2) << std::endl;
    std::cout << "Valor de ch2 como caractere: " << ch2 << std::endl;

    return 0;
}
