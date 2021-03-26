#include "vaca.h"

Vaca::Vaca(string _nome, int _idade, string _dataNascimento)
    :Animal (_nome, _idade, _dataNascimento)
{

}

string Animal::fazerBarulho(){
    return "Moo.";
}
