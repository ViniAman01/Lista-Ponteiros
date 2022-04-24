/*O trecho de codigo é sobre uma função swap, que faz a troca de valores entre
duas variaveis, a passagem de parametros da função é feita por valor.
O codigo a seguir busca realizar a mesma função usando passagem por referencia.*/ 
#include <iostream>

using namespace std;

void swap1(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(void)
{
    int x,y;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    swap1(&x,&y);
    cout << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    return 0;
}