#ifndef GATO_HPP
#define GATO_HPP

#include "Animal.hpp"

class Gato : public Animal {
public:
    Gato(std::string nombre);

    void mover() override;

    void saludar() override;

    void maullar();
};

#endif
