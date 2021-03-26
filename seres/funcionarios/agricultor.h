#ifndef AGRICULTOR_H
#define AGRICULTOR_H
#include "locais/plantacao.h"
#include "seres/funcionarios/pessoa.h"
#include "seres/Planta.h"
#include <string>

using namespace std;

class Agricultor : public Pessoa
{
private:
    float bonus;
public:
    Agricultor(string _nome, int _idade, string _dataNascimento, float _Salario, float _bonus);

    string plantar(Planta *_planta, Plantacao *_plantacao);

    string regar(Plantacao _plantacao);

    string colher(Plantacao _plantacao);

    float calcularSalarioMensal();
};

#endif // AGRICULTOR_H
