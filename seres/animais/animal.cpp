#include "animal.h"

int Animal::getAfeto() const
{
    return afeto;
}

void Animal::setAfeto(int value)
{
    afeto = value;
}

Animal::Animal(string _nome, int _idade, string _dataNascimento)
    : SerVivo(_nome, _idade, _dataNascimento)
{
    afeto = 0; //afeto começa zerado
}

string Animal::addAfeto(){
    int newAfeto = getAfeto() + 1;
    setAfeto(newAfeto);
    return "O animal está mais feliz!";
}


