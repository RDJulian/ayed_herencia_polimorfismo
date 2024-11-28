#include "Gato.hpp"
#include <iostream>

Gato::Gato(std::string nombre) : Animal(nombre) {
}

void Gato::mover() {
    std::cout << "Corro y salto muy alto." << std::endl;
}

void Gato::saludar() {
    std::cout << "Hola, me llamo " << nombre << " y soy un gato, miau." << std::endl;
}

void Gato::maullar() {
    std::cout << "Miau miau" << std::endl;
}
