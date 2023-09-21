#include <iostream>

int main() {
    double x, y;

    std::cout << "Digite o valor de x: ";
    std::cin >> x;

    std::cout << "Digite o valor de y: ";
    std::cin >> y;

    double fx = 5 * x + 2;

    if (y > fx) {
        std::cout << "O ponto (" << x << ", " << y << ") está acima da curva f(x) = 5x + 2" << std::endl;
    } else if (y < fx) {
        std::cout << "O ponto (" << x << ", " << y << ") está abaixo da curva f(x) = 5x + 2" << std::endl;
    } else {
        std::cout << "O ponto (" << x << ", " << y << ") está na curva f(x) = 5x + 2" << std::endl;
    }

    return 0;
}

