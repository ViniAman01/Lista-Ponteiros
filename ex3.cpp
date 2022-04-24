#include <iostream>

using namespace std;

void f1(float *, float *);
void f2(float *, float *);
void f3(float *, float *);

int main(void)
{
    float x, y;
    cout << "Value of x: ";
    cin >> x;
    f1(&x,&y);
    cout << "Result of Function 1 (x-1): " << y << endl;
    f2(&x,&y);
    cout << "Result of Function 2 (x+1): " << y << endl;
    f3(&x,&y);
    cout << "Result of Function 3 (x²+x-2): " << y << endl;
    return 0;
}

void f1(float *x, float *y)
{
    *y = *x - 1;
}

void f2(float *x, float *y)
{
    *y = *x + 1;
}

void f3(float *x, float *y)
{
    *y = (*x)*(*x) + *x - 2; 
}