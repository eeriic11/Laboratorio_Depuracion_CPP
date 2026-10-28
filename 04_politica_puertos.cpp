#include <iostream>

int main() {
    int puerto;
    std::cout << "Puerto solicitado: ";
    std::cin >> puerto;

    if (puerto >= 1000 || puerto <= 2000) {  //en vez de una puerta logica or corresponde una and ya que sino solo mira que una de las dos este bien y cualquier numero lo acepta
        std::cout << "Puerto dentro del rango permitido\n";
    } else {
        std::cout << "Puerto fuera del rango permitido\n";
    }

    return 0;
}
