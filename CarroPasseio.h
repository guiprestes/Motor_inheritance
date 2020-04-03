#ifndef CARROPASSEIO_H
#define CARROPASSEIO_H

#include <string>
#include "Motor.h"
#include "Veiculo.h"

class CarroPasseio: public Motor, public Veiculo
{
    public:
        CarroPasseio();
        ~CarroPasseio();

        void setdata_car (char* Cor, char* Modelo);
        char* getdata_car();

    private:
        char* Cor ;
        char* Modelo;
};

#endif // CARROPASSEIO_H
