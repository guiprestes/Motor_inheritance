#include "CarroPasseio.h"

CarroPasseio::CarroPasseio()
{
    //ctor
}
CarroPasseio::~CarroPasseio()
{
    //dtor
}

void CarroPasseio::setdata_car(char* c, char* m)
{
    Cor = c;
    Modelo = m;
}

char* CarroPasseio::getdata_car()
{
    return Cor, Modelo;
}
