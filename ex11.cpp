#include <iostream>
#include <cmath>

using namespace std;

float F1(int *x)
{
    return (pow(*x,2)/3 + pow(*x,3)/2 - *x/10); 
}

float F2(int *x)
{
    return (1/5*pow(*x,2) - 10/ *x);
}

float F3(int *x)
{
    return ((pow((*x-2),2)) * (2*(*x-3)));
}

float F4(int *x)
{
    return (*x/2*sqrt(*x));
}

float F5(int *x)
{
    return (pow(M_E,(-5 * (*x))));
}

float F6(int *x)
{
    return (-12 + 3/7*(pow(M_E,-*x) - 1));
}

float F7(int *x)
{
    return (0.3333333*sin(3*(*x)));
}

float F8(int *x)
{
    return (3 * sin(5*M_PI/3 * *x + M_PI/10));
}

float F9(int *x)
{
    return (log(*x+1));
}

float F10(int *x)
{
    return (log(log(*x)));
}

int main(void)
{
    int x1 = 3;
    int x2 = 2;
    cout << "F1(3): " << F1(&x1) << "\t\tF1(2): " << F1(&x2) << endl;
    cout << "F2(3): " << F2(&x1) << "\t\tF2(2): " << F2(&x2) << endl;
    cout << "F3(3): " << F3(&x1) << "\t\tF3(2): " << F3(&x2) << endl;
    cout << "F4(3): " << F4(&x1) << "\t\tF4(2): " << F4(&x2) << endl;
    cout << "F5(3): " << F5(&x1) << "\t\tF5(2): " << F5(&x2) << endl;
    cout << "F6(3): " << F6(&x1) << "\t\tF6(2): " << F6(&x2) << endl;
    cout << "F7(3): " << F7(&x1) << "\t\tF7(2): " << F7(&x2) << endl;
    cout << "F8(3): " << F8(&x1) << "\t\tF8(2): " << F8(&x2) << endl;
    cout << "F9(3): " << F9(&x1) << "\t\tF9(2): " << F9(&x2) << endl;
    cout << "F10(3): " << F10(&x1) << "\t\tF10(2): " << F10(&x2) << endl;
    return 0;
}