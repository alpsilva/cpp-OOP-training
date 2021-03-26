#ifndef LOCALHABITACAO_H
#define LOCALHABITACAO_H
#include "local.h"
#include "seres/animais/animal.h"
#include <string>
#include <vector>

using namespace std;

class LocalHabitacao : public Local
{
private:
    std::vector<Animal> listaAnimais;
    bool emUso; //indica se o local está em uso.
public:
    LocalHabitacao(string _nome, int _tamanho);

    void colocarAnimal(Animal _animal);
    std::vector<Animal> getListaAnimais() const;
    void setListaAnimais(const std::vector<Animal> &value);
};

#endif // LOCALHABITACAO_H
