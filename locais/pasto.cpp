#include "pasto.h"

std::vector<Animal> Pasto::getListaAnimais() const
{
    return listaAnimais;
}

void Pasto::setListaAnimais(const std::vector<Animal> &value)
{
    listaAnimais = value;
}

Pasto::Pasto(string _nome, int _tamanho)
    :Local(_nome, _tamanho)
{
    emUso = false;
}
