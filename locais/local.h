#ifndef LOCAL_H
#define LOCAL_H
#include <string>

using namespace std;

class Local
{
protected:
    int tamanho; //em m²
public:
    string nome;
    Local(string _nome, int _tamanho);

    string limpar();
};

#endif // LOCAL_H
