#include <iostream>
#include "CarroPasseio.h"

using namespace std;

int main()
{
    char v;

    CarroPasseio CARRO;

    CARRO.setdata_motor(150, 290);
    CARRO.setPreco(320.000);
    CARRO.setdata_veic(900, 359);
    CARRO.setdata_car("Preto", "Ferrari");

    cout << "Motor: " << CARRO.getdata_motor() << endl;
    cout << "Preco: " << CARRO.getPreco() << endl;
    cout << "Veiculo: " << CARRO.getdata_veic() << endl;
    cout << "CARRO: " << CARRO.getdata_car() << endl;
