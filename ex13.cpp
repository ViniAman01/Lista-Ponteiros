#include <iostream>

using namespace std;

int main(void)
{
    int n,*array,*ptr,sum;
    ptr = array;
    sum = 0;
    cout << "Tamanho do array: ";
    cin >> n;
    cout << "Digite os valores do array:\n";
    for(ptr; ptr < (array+n); ptr++)
    {
        cin >> *ptr;
        sum += *ptr;
    }
    cout << "Soma dos valores: " << sum << endl;
    return 0;
}