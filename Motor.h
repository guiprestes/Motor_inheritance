#ifndef MOTOR_H
#define MOTOR_H


class Motor
{
    public:
        Motor();
        Motor(int NumCilindro, int Potencia);
        ~Motor();

        void setdata_motor(int n, int p);

        int getdata_motor()
        {
            return NumCilindro,Potencia;
        };


    private:
        int NumCilindro;
        int Potencia;
};

#endif // MOTOR_H
