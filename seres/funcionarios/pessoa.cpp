#include "pessoa.h"

Pessoa::Pessoa(string _nome, int _idade, string _dataNascimento, float _salario)
    : SerVivo(_nome, _idade, _dataNascimento)
{
    salario = _salario;
}
