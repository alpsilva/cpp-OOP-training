#ifndef VACA_H
#define VACA_H
#include "seres/animais/animal.h"
#include <string>

using namespace std;

class Vaca : public Animal
{
public:
    Vaca(string _nome, int _idade, string _dataNascimento);
};

#endif // VACA_H
