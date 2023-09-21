#include <iostream>

int main() {
    char ch2 = 'A'; // Supondo que ch2 seja uma letra maiúscula (por exemplo, 'A')

    // Converter para letra minúscula subtraindo 32 do valor ASCII
    char ch3 = ch2 + 32;

    std::cout << "Valor de ch3 em decimal: " << static_cast<int>(ch3) << std::endl;
    std::cout << "Valor de ch3 em octal: " << std::oct << static_cast<int>(ch3) << std::endl;
    std::cout << "Valor de ch3 em hexadecimal: " << std::hex << static_cast<int>(ch3) << std::endl;
    std::cout << "Valor de ch3 como caractere: " << ch3 << std::endl;

    return 0;
}
