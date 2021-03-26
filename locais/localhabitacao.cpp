#include "localhabitacao.h"

std::vector<Animal> LocalHabitacao::getListaAnimais() const
{
    return listaAnimais;
}

void LocalHabitacao::setListaAnimais(const std::vector<Animal> &value)
{
    listaAnimais = value;
}

LocalHabitacao::LocalHabitacao(string _nome, int _tamanho)
    :Local(_nome, _tamanho)
{
    emUso = false;
}

void LocalHabitacao::colocarAnimal(Animal _animal){
    listaAnimais.push_back(_animal);
}
