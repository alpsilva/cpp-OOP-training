#include "plantacao.h"

Plantacao::Plantacao(string _nome, int _tamanho)
    :Local(_nome, _tamanho)
{
}

Planta Plantacao::getTipoCultivo() const
{
    return *tipoCultivo;
}

void Plantacao::setTipoCultivo(Planta *_planta)
{
    tipoCultivo = _planta;
}
