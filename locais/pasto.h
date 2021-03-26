#ifndef PASTO_H
#define PASTO_H
#include "locais/local.h"
#include "seres/animais/animal.h"
#include <string>
#include <vector>

using namespace std;

class Pasto : public Local
{
private:
    std::vector<Animal> listaAnimais;
    bool emUso; //indica se o local está em uso.
public:
    Pasto(string _nome, int _tamanho);
    std::vector<Animal> getListaAnimais() const;
    void setListaAnimais(const std::vector<Animal> &value);
};

#endif // PASTO_H
