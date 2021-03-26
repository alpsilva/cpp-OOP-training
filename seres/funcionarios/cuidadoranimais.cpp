#include "cuidadoranimais.h"

CuidadorAnimais::CuidadorAnimais(string _nome, int _idade, string _dataNascimento, float _salario, float _bonus)
    :Pessoa (_nome, _idade, _dataNascimento, _salario)
{
    bonus = _bonus;
}

string CuidadorAnimais::retiraAnimais(LocalHabitacao hab, Pasto pasto){
    vector<Animal> listaZerada;
    vector<Animal> listaAux = hab.getListaAnimais();
    hab.setListaAnimais(listaZerada); //esvazia a habitacao

    pasto.setListaAnimais(listaAux);
    string str = "Os animais foram movidos de ";
    str.append(hab.nome);
    str.append(" para ");
    str.append(pasto.nome);
    return str;
}

string CuidadorAnimais::guardaAnimais(Pasto pasto, LocalHabitacao hab){
    vector<Animal> listaZerada;
    vector<Animal> listaAux = pasto.getListaAnimais();
    pasto.setListaAnimais(listaZerada); //esvazia a habitacao

    hab.setListaAnimais(listaAux);
    string str = "Os animais foram movidos de ";
    str.append(pasto.nome);
    str.append(" para ");
    str.append(hab.nome);
    return str;
}

void CuidadorAnimais::afagaAnimal(Animal animal){
    animal.addAfeto();
}

float CuidadorAnimais::calcularSalarioMensal(){
    return ((salario * 4) * bonus) + 1000;
}
