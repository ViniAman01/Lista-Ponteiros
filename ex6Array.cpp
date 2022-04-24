#include <iostream>
#include <cmath>

using namespace std;

struct Coordenadas
{
    float x;
    float y;
    float x0;
    float y0;
};

struct Coeficientes
{
    float a,b,c,d,e;
};

void leitura(Coordenadas *);
void escrita(Coeficientes *);
void calcraio(Coordenadas *, float * = 0);
void calcoef(Coeficientes *, Coordenadas *, float *);

void (*Array1)(Coordenadas *) = {leitura};
void (*Array2)(Coeficientes *) = {escrita};
void (*Array3)(Coordenadas *, float *) = {calcraio};
void (*Array4)(Coeficientes *,Coordenadas *, float *) = {calcoef};

int main(void)
{
    Coordenadas ponto;
    Coeficientes equa;
    float raio;
    Array3(&ponto,&raio);
    cout << endl << "Raio = " << raio << endl;
    Array4(&equa,&ponto,&raio);
    Array2(&equa);
    return 0;
}

void calcoef(Coeficientes *equa, Coordenadas *ponto, float *raio)
{
    equa->a = 1;
    equa->b = 1;
    equa->c = -2*ponto->x0;
    equa->d = -2*ponto->y0;
    equa->e = pow(ponto->x0,2)+pow(ponto->y0,2)-pow(*raio,2);
}

void calcraio(Coordenadas *ponto, float *raio)
{
    Array1(&(*ponto));
    *raio = sqrt(pow((ponto->x-ponto->x0),2)+pow((ponto->y-ponto->y0),2));
}

void escrita(Coeficientes *equa)
{
    cout << endl << "Coeficientes:" << endl;
    cout << "a = " << equa->a << endl;
    cout << "b =  " << equa->b << endl;
    cout << "c = " << equa->c << endl;
    cout << "d = " << equa->d << endl;  
    cout << "e = " << equa->e << endl << endl;
    cout << "Equação: " << endl << "x² + y² + " << equa->c << "x + " << equa->d << "y + " << equa->e << endl;
}

void leitura(Coordenadas *ponto)
{
    cout << "x: ";
    cin >> ponto->x;
    cout << "y: ";
    cin >> ponto->y;
    cout << "x0: ";
    cin >> ponto->x0;
    cout << "y0: ";
    cin >> ponto->y0;
}