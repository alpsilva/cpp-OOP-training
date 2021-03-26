#ifndef PESSOA_H
#define PESSOA_H
#include "/home/alps2/Trainee1/seres/servivo.h"
#include <string>

using namespace std;

class Pessoa : public SerVivo
{
protected:
    float salario;
public:
    Pessoa(string _nome, int _idade, string _dataNascimento, float _salario);
};

#endif // PESSOA_H
