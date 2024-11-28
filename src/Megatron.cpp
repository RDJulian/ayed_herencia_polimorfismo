#include "Megatron.hpp"
#include <iostream>

Megatron::Megatron(int velocidad, int defensa, int fuerza) : Transformer
    (velocidad,
     defensa,
     fuerza,
     "Megatron") {
    // Más lógica de Megatron
}

void Megatron::responder(std::string mensaje) {
    std::cout << "Eres despreciable..." << std::endl;
    // Más lógica para el responder, como en el TP1.
}

Megatron::~Megatron() {
    std::cout << "Me vengare, humano..." << std::endl;
}
