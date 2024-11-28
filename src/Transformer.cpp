#include "Transformer.hpp"
#include <iostream>

Transformer::Transformer(int velocidad, int defensa, int fuerza, std::string nombre) {
    this->velocidad = velocidad;
    this->defensa = defensa;
    this->fuerza = fuerza;
    this->nombre = nombre;
}

void Transformer::responder(std::string mensaje) {
    std::cout << "Hola soy " << nombre << ", un Transformer genérico." << std::endl;
}

int Transformer::obtener_poder_total() {
    return velocidad + defensa + fuerza;
}

Transformer::~Transformer() {
    std::cout << "Se llamó al destructor base." << std::endl;
}
