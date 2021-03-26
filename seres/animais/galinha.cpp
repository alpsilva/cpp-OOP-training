#include "galinha.h"

Galinha::Galinha(string _nome, int _idade, string _dataNascimento)
    :Animal (_nome, _idade, _dataNascimento)
{

}

string Animal::fazerBarulho(){
    return "Beep Boop.";
}

