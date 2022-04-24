#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

float F1(int *);
float F2(int *);
float F3(int *);
float F4(int *);
float F5(int *);
float F6(int *);
float F7(int *);
float F8(int *);
float F9(int *);
float F10(int *);

float (*Array[10])(int *) = {F1,F2,F3,F3,F5,F6,F7,F8,F9,F10};

int main(void)
{
    int x1 = 3;
    int x2 = 2;
    for(int i = 0; i < 10; i++)
    { 
        printf("F%d(3): %f \t F%d(2): %f \n",i+1,Array[i](&x1),i+1,Array[i](&x2));
    }
    return 0;
}

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
    return ((*x/2)*sqrt(*x));
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