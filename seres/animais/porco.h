#ifndef PORCO_H
#define PORCO_H
#include "seres/animais/animal.h"
#include <string>

using namespace std;

class Porco : public Animal
{
public:
    Porco(string _nome, int _idade, string _dataNascimento);
};

#endif // PORCO_H
