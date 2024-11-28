#include "Gato.hpp"
#include "Megatron.hpp"
#include "Transformer.hpp"

int main() {
    Transformer* bumblebee = new Transformer(10, 20, 5, "Bumblebee");
    Megatron* megatron = new Megatron(50, 60, 100);

    bumblebee->responder("Hola");
    megatron->responder("Hola");

    Transformer* transformer = megatron;

    transformer->responder("Hola");

    delete bumblebee;
    delete megatron;

    Gato gato("Romeo");
    gato.mover();
    gato.saludar();
    gato.maullar();

    Animal* animal = &gato;
    animal->mover();
    animal->saludar();

    return 0;
}
