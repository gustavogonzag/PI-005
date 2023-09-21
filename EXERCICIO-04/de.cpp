#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double x, y, z;

    std::cout << "Digite o valor de x: ";
    std::cin >> x;

    std::cout << "Digite o valor de y: ";
    std::cin >> y;

    // Calcula a distância euclidiana
    z = std::sqrt(x * x + y * y);

    std::cout << "A distância euclidiana do ponto (" << x << ", " << y << ") ao centro de coordenadas é: " << z << std::endl;

    // Calcula o produto de x e y
    z = x * y;

    // Imprime o resultado em notação científica
    std::cout << "O produto de x e y em notação científica é: " << std::scientific << z << std::endl;

    return 0;
}
