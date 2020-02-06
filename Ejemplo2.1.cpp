#include<iostream>
using namespace std;
class Gato
{
    public:                        //Al quitar la palabra public, los datos se toman como si fueran privados
    unsigned int suEdad;
    unsigned int suPeso;
    void Maullar()
    {
        cout<<"miaaaaauuuuuuuuuu"<<endl;
    }
};

int main(void)
{
    Gato Michi;
    Michi.suEdad=5;
    Michi.suPeso=8;
    cout<<"El peso de Michi es: "<<Michi.suPeso<<endl;
    cout<<"La edad de Michi es: "<<Michi.suEdad<<endl;
    Michi.Maullar();

}
