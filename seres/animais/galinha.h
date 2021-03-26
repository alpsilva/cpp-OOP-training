#ifndef GALINHA_H
#define GALINHA_H
#include "seres/animais/animal.h"
#include <string>

using namespace std;

class Galinha : public Animal
{
public:
    Galinha(string _nome, int _idade, string _dataNascimento);
};

#endif // GALINHA_H
