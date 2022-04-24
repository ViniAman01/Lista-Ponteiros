#include <iostream>

using namespace std;

void swap1(int *, int *);

void (*Array[1])(int *, int *) = {swap1};

int main(void)
{
    int x,y;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    (*Array)(&x,&y);
    cout << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    return 0;
}

void swap1(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}