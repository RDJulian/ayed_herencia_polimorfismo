#ifndef MEGATRON_HPP
#define MEGATRON_HPP

#include "Transformer.hpp"

class Megatron : public Transformer {
public:
    Megatron(int velocidad, int defensa, int fuerza);

    void responder(std::string mensaje) override;

    ~Megatron() override;
};

#endif
