#ifndef ANIMAL_H
#define ANIMAL_H
#include "seres/servivo.h"
#include <string>

using namespace std;

class Animal : public SerVivo
{
protected:
    int afeto;
public:
    Animal(string _nome, int _idade, string _dataNascimento);
    string addAfeto();

    string fazerBarulho();

    int getAfeto() const;
    void setAfeto(int value);
};

#endif // ANIMAL_H
