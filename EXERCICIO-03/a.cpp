#include <iostream>
#include <climits> // Para SHRT_MAX e SHRT_MIN

int main() {
    int valor;
    std::cout << "Digite um número inteiro: ";
    std::cin >> valor;

    std::cout << "O valor fornecido (" << valor << ") é " << ((valor > SHRT_MAX || valor < SHRT_MIN) ? "maior que um short int" : "este valor pertence ao intervalo dos short int") << std::endl;

    return 0;
}
