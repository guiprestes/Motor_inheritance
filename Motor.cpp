#include "Motor.h"

Motor::Motor()
{
    //ctor
}

Motor::Motor(int NumCilindro, int Potencia)
{
    setdata_motor(NumCilindro, Potencia);
}

Motor::~Motor()
{
    //dtor
}
void Motor::setdata_motor(int n, int p)
{
    NumCilindro = n;
    Potencia = p;

}
