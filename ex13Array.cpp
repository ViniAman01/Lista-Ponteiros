#include <iostream>

using namespace std;

void Sum(int *, int *, int *);

void (*Array)(int *, int *, int *) = Sum;

int main(void)
{
    int array[100],*ptr,sum;
    Array(array,ptr,&sum);
    cout << "Soma dos valores: " << sum << endl;
    return 0;
}

void Sum(int *array, int *ptr, int *sum)
{
    int n;
    *sum = 0;
    cout << "Tamanho do array: ";
    cin >> n;
    cout << "Digite os valores do array:\n";
    for(ptr = array; ptr < (array+n); ptr++)
    {
        cin >> *ptr;
        *sum += *ptr;
    }
}