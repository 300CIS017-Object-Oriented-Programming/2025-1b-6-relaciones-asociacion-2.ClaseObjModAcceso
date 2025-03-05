//
// Created by lufe and Gonzo.
//

#ifndef INC_1_CLASEOBJETO_PERRO_H
#define INC_1_CLASEOBJETO_PERRO_H

#include <string>
#include <iostream>

class Perro {
private:
    std::string tamanio;
    std::string raza;

public:
    std::string nombre;
    std::string color;
    int edad;

    void ladrar();

    void saludar(std::string mensaje);
};

#endif //INC_1_CLASEOBJETO_PERRO_H
