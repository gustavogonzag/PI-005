#include <iostream>

int main() {
    unsigned char informacaoGenetica;

    // Passo 1: Ler a informação genética
    std::cout << "Digite a informação genética da planta (um valor entre 0 e 255): ";
    std::cin >> informacaoGenetica;

    // Passo 2: Contar quantos genes estão presentes usando operadores bit a bit
    int genesPresentes = 0;
    for (int i = 0; i < 8; i++) {
        if ((informacaoGenetica & (1 << i)) != 0) {
            genesPresentes++;
        }
    }

    std::cout << "Número de genes presentes na planta: " << genesPresentes << std::endl;

    // Passo 3: Verificar se um gene específico está presente
    int geneEspecifico;
    std::cout << "Digite o número do gene que deseja verificar (entre 1 e 8): ";
    std::cin >> geneEspecifico;

    if (geneEspecifico >= 1 && geneEspecifico <= 8) {
        int mascara = 1 << (geneEspecifico - 1); // Cria uma máscara para o gene específico
        bool presente = (informacaoGenetica & mascara) != 0;

        if (presente) {
            std::cout << "O gene " << geneEspecifico << " está presente na planta." << std::endl;
        } else {
            std::cout << "O gene " << geneEspecifico << " não está presente na planta." << std::endl;
        }
    } else {
        std::cout << "Número de gene inválido. Digite um número entre 1 e 8." << std::endl;
    }

    return 0;
}

