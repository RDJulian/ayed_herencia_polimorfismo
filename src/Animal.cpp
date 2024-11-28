#include "Animal.hpp"
#include <iostream>

Animal::Animal(std::string nombre) {
    this->nombre = nombre;
}

void Animal::saludar() {
    std::cout << "Hola, me llamo " << nombre << std::endl;
}
