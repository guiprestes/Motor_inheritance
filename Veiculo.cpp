#include "Veiculo.h"

Veiculo::Veiculo()
{
    //ctor
}

Veiculo::Veiculo(int Peso, int VelocMax)
{
    setdata_veic(Peso, VelocMax);
}

Veiculo::Veiculo(float Preco)
{
    setPreco(Preco);
}

Veiculo::~Veiculo()
{
    //dtor
}

void Veiculo::setdata_veic(int p, int vel)
{
    Peso = p;
    VelocMax = vel;
}
void Veiculo::setPreco(float pr)
{
    Preco = pr;
}
