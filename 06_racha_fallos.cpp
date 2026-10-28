#include <iostream>

int main() {
    int rachaActual = 0;
    int rachaMaxima = 0;

    std::cout << "Introduce 6 eventos: 1 = intento fallido, 0 = correcto\n";
    for (int evento = 1; evento <= 6; evento++) {
        int fallo;
        std::cout << "Evento " << evento << ": ";
        std::cin >> fallo;

        if (fallo == 1) {
            rachaActual = 0;  //aqui cada vez que falle la racha actual se volvera a poner a 0 y por tanto la racha actual y maxima nunca podra ser mas que 1 y entonces la alerta de los 3 fallos no funcionaria nunca
            rachaActual++;
        } else {
            rachaActual = 0;
        }

        if (rachaActual > rachaMaxima) {
            rachaMaxima = rachaActual;
        }
    }

    std::cout << "Racha maxima: " << rachaMaxima << '\n';
    if (rachaMaxima > 3) {
        std::cout << "ALERTA: 3 o mas fallos consecutivos\n";
    } else {
        std::cout << "Sin alerta\n";
    }

    return 0;
}
