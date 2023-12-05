#include <iostream>

int main() {
    // Exemplo 1: Declaração e Inicialização
    int array1[5]; // Array de inteiros com 5 elementos
    int array2[] = {1, 2, 3, 4, 5}; // Inicialização automática com base nos valores fornecidos

    // Exemplo 2: Acesso aos Elementos
    std::cout << "Elemento 3 do array2: " << array2[2] << std::endl;

    // Exemplo 3: Modificação de Elementos
    array2[2] = 10;

    // Exemplo 4: Tamanho do Array
    int tamanhoArray2 = sizeof(array2) / sizeof(array2[0]);
    std::cout << "Tamanho do array2: " << tamanhoArray2 << " elementos" << std::endl;

    // Exemplo 5: Iteração através do Array com For
    std::cout << "Iterando através do array2: ";
    for (int i = 0; i < tamanhoArray2; ++i) {
        std::cout << array2[i] << " ";
    }
    std::cout << std::endl;

    // Exemplo 6: Iteração através do Array com Range-based For (C++11 em diante)
    std::cout << "Iterando através do array2 com range-based for: ";
    for (const auto& elemento : array2) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;

    // Evitando o aviso de variável não utilizada
    (void)array1;

    return 0;
}
