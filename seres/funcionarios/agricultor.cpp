#include "agricultor.h"

Agricultor::Agricultor(string _nome, int _idade, string _dataNascimento, float _Salario, float _bonus)
    :Pessoa(_nome, _idade, _dataNascimento, _Salario)
{
    bonus = _bonus;
}

string Agricultor::plantar(Planta *_planta, Plantacao *_plantacao){
    _plantacao->setTipoCultivo(_planta);
    string str = _planta->nome;
    str.append(" foi plantada na horta ");
    str.append(_plantacao->nome);
    return str;
}

string Agricultor::regar(Plantacao _plantacao){
    string str = "A horta ";
    str.append(_plantacao.nome);
    str.append(" foi regada!");
    return str;
}

string Agricultor::colher(Plantacao _plantacao){

    string str = nome;
    str.append("Foi colheida/o ");
    str.append(_plantacao.getTipoCultivo().nome);
    str.append(" na horta ");
    str.append(_plantacao.nome);
    //Retira a planta da plantaçao
    Planta *planta = new Planta("nada", "null");
    _plantacao.setTipoCultivo(planta);
    return str;
}

float Agricultor::calcularSalarioMensal(){
    return ((salario * 4) * bonus) + 1500;
}
