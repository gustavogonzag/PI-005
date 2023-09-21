#include <iostream>

int main() {
    char ch1, ch2, ch3;

    std::cout << "Digite um caractere: ";
    std::cin >> ch1;

    // Verifica se é uma letra maiúscula, minúscula, dígito ou outro tipo de caractere
    ch2 = (ch1 >= 'A' && ch1 <= 'Z') ? 'U' : (ch1 >= 'a' && ch1 <= 'z') ? 'L' : (ch1 >= '0' && ch1 <= '9') ? 'D' : 'O';

    std::cout << "O caractere digitado é: " << ch1 << std::endl;
    std::cout << "Tipo de caractere: ";
    
    switch (ch2) {
        case 'U':
            std::cout << "Letra maiúscula" << std::endl;
            break;
        case 'L':
            std::cout << "Letra minúscula" << std::endl;
            break;
        case 'D':
            std::cout << "Dígito" << std::endl;
            break;
        default:
            std::cout << "Outro tipo de caractere" << std::endl;
    }

    return 0;
}
