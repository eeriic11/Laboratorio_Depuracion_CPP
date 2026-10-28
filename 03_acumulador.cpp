#include <iostream>

int main() {
    int total = 0;

    for (int minuto = 1; minuto <= 3; minuto++) {
        int alertas;
        std::cout << "Alertas del minuto " << minuto << ": ";
        std::cin >> alertas;

        int total = 0; //cada vez que se repite el for la variable total vuelve a ser 0 por tanto el valor final sera el ultimo valor de la variable alertas
        total += alertas;
    }

    std::cout << "Total de alertas: " << total << '\n';
    return 0;
}
