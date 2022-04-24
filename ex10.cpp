#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

void FuncPhi(float *x, float *phi)
{
    *phi = (1/(sqrt(2*M_PI)))*(pow(M_E,((-pow(*x,2))/2)));
}

void PassVal(float *Valores)
{
    float x,phi,*ptr;
    ptr = Valores-1;
    ofstream arquivo("Resultados.txt");
    for(x = -3; x <= 3; x += 0.2)
    {
        FuncPhi(&x,&phi);
        ptr++;
        *ptr = phi;
    }   
    arquivo.is_open();
    for(int i = 0; i < 30; i++)
    {
        arquivo << Valores[i] << "\t";
        if((i+1) % 5 == 0)
        {
            arquivo << endl;
        }
    }
    arquivo.close();
}

int main(void)
{
    float Valores[30];
    PassVal(Valores);  
    cout << "Arquivo 'Resultados.txt' foi criado!" << endl;
    return 0;
}