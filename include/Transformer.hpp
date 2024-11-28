#ifndef TRANSFORMER_HPP
#define TRANSFORMER_HPP

#include <string>

class Transformer {
protected:
    int velocidad;
    int defensa;
    int fuerza;
    std::string nombre;

public:
    Transformer(int velocidad, int defensa, int fuerza, std::string nombre);

    virtual void responder(std::string mensaje);

    int obtener_poder_total();

    virtual ~Transformer();
};

#endif
