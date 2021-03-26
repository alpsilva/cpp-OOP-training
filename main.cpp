#include <iostream>
#include "seres/funcionarios/cuidadoranimais.h"
#include "seres/funcionarios/agricultor.h"
#include "seres/animais/vaca.h"
#include "seres/animais/vaca.h"
#include "seres/animais/porco.h"
#include "seres/animais/galinha.h"
#include "seres/Planta.h"

using namespace std;

int main()
{
    CuidadorAnimais *cuidador1 = new CuidadorAnimais("José Pereira", 30, "01/05/1947", 300, 1.2);
    Agricultor *agricultor1 = new Agricultor("Catraco de Almeida", 17, "01/05/1960", 350, 1.1);

    Vaca *vaca1 = new Vaca("Mimosa", 7, "01/05/1970");
    Porco *porco1 = new Porco("Torresmo", 3, "01/05/1974");
    Galinha *galinha1 = new Galinha("Giselda", 1, "01/05/1976");

    Planta *planta1 = new Planta("Batata", "Tubérculo");
    Planta *planta2 = new Planta("Maçã", "Fruta");

    LocalHabitacao *curral = new LocalHabitacao("Curral", 30);
    LocalHabitacao *celeiro = new LocalHabitacao("Celeiro", 50);
    LocalHabitacao *Galinheiro = new LocalHabitacao("Galinheiro", 10);

    Pasto *pasto1 = new Pasto("Pasto1", 200);
    Pasto *pasto2 = new Pasto("Pasto2", 150);

    Plantacao *horta1 = new Plantacao("Horta1", 100);
    Plantacao *horta2 = new Plantacao("Horta2", 100);

    //operações

    cout << agricultor1->plantar(planta1, horta1) << endl;
    cout << agricultor1->plantar(planta2, horta2) << endl;
}
