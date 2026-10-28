#include <iostream>

int main() {
    int total, sospechosos;
    std::cout << "Introduce total de paquetes y paquetes sospechosos: ";
    std::cin >> total >> sospechosos;

    double porcentaje = sospechosos / total * 100;  //al hacer la division la ara en enteros y no habran decimales hay que cambiar las variables total y sospechosos y ponerlas con float o double
    std::cout << "Porcentaje sospechoso: " << porcentaje << "%\n";  

    if (porcentaje >= 20) {
        std::cout << "ALERTA: trafico sospechoso\n";
    } else {
        std::cout << "Trafico normal\n";
    }

    return 0;
}
