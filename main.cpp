#include <iostream>
#include "src/Perro.h"

void crearPerritos() {
    // Instanciar
    Perro firulais;
    firulais.nombre = "Firulais";
    firulais.color = "Negro";
    firulais.edad = 5;
    // firulais.tamanio = "Grande";
    // firulais.raza = "Chau chau";

    std::cout << "Que ladre" << std::endl;
    firulais.ladrar();
    firulais.saludar("miercoles");


    Perro luna;
    luna.nombre = "Luna";
    luna.color = "Blanco";
    luna.edad = 2;
    // luna.tamanio = "Pequeno";

    std::cout << "Que ladre" << std::endl;
    luna.ladrar();
}

int main() {
    crearPerritos();
    return 0;
}
