#ifndef VEICULO_H
#define VEICULO_H


class Veiculo
{
    public:
        Veiculo();
        Veiculo(int Peso, int VelocMax);
        Veiculo(float Preco);
        ~Veiculo();

        void setdata_veic (int p, int vel);
        void setPreco (float pr);
        int getdata_veic()
        {
            return Peso, VelocMax;
        };
        float getPreco()
        {
            return Preco;
        };

    private:
        int Peso;
        int VelocMax;
        float Preco;
};

#endif // VEICULO_H
