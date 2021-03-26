#ifndef CUIDADORANIMAIS_H
#define CUIDADORANIMAIS_H
#include "seres/funcionarios/pessoa.h"
#include "locais/localhabitacao.h"
#include "locais/pasto.h"
#include <string>

using namespace std;

class CuidadorAnimais : public Pessoa
{
private:
        float bonus;
public:
    CuidadorAnimais(string _nome, int _idade, string _dataNascimento, float _salario, float _bonus);

    string retiraAnimais(LocalHabitacao hab, Pasto pasto);
    
    string guardaAnimais(Pasto pasto, LocalHabitacao hab);

    void afagaAnimal(Animal animal);

    float calcularSalarioMensal();
};

#endif // CUIDADORANIMAIS_H
