#ifndef SERVIVO_H
#define SERVIVO_H
#include <string>

using namespace std;

class SerVivo
{
protected:
    string dataNascimento;
public:
    string nome;
    int idade;

    SerVivo(string _nome, int _idade, string _dataNascimento);
};

#endif // SERVIVO_H
