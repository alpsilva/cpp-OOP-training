#ifndef PLANTA_H
#define PLANTA_H
#include <string>

using namespace std;

class Planta
{
public:
    string nome;
    string tipo; //Legume, verdura, fruta, etc.

    Planta(string _nome, string _tipo);
};

#endif // PLANTA_H
