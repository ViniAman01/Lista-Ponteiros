#include <iostream>

using namespace std;

void MD(double *, double *, double *);

void (*Array[1])(double *, double *, double *) = {MD};

int main(void)
{
    double u,mA,mB;
    cout << "M_a: ";
    cin >> mA;
    cout << "M_b: ";
    cin >> mB;
    Array[0](&u,&mA,&mB);
    cout << "u = " << u << endl;
    return 0;
}

void MD(double *u, double *mA, double *mB)
{
    *u = ((*mA)*(*mB))/((*mA)+(*mB));
}