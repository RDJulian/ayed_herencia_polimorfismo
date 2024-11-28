#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal {
protected:
     std::string nombre;

public:
     Animal(std::string nombre);

     virtual void mover() = 0;

     virtual void saludar();
};

#endif
