#include <iostream>

using namespace std;

void MD(double *, double *, double *);

int main(void)
{
    double u,mA,mB;
    cout << "M_a: ";
    cin >> mA;
    cout << "M_b: ";
    cin >> mB;
    MD(&u,&mA,&mB);
    cout << "u = " << u << endl;
    return 0;
}

void MD(double *u, double *mA, double *mB)
{
    *u = ((*mA)*(*mB))/((*mA)+(*mB));
}