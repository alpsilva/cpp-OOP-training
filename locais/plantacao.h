#ifndef PLANTACAO_H
#define PLANTACAO_H
#include "locais/local.h"
#include "seres/Planta.h"
#include <string>

using namespace std;

class Plantacao : public Local
{
private:
    Planta *tipoCultivo = new Planta("nada", "null");
public:
    Plantacao(string _nome, int _tamanho);

    Planta getTipoCultivo() const;
    void setTipoCultivo(Planta *_planta);
};

#endif // PLANTACAO_H
