#include <iostream>

using namespace std;

int main(void)
{
    int *v,*ptr,tam,elemento,posicao;
    cout << "Tamanho do array de inteiros: ";
    cin >> tam;
    v = new int[tam];
    ptr = v;
    cout << "Digite os elementos do array: " << endl;
    for(ptr; ptr < (v+tam); ptr++)
    {
        cin >> *ptr;
    }
    cout << endl << "Qual elemento deseja procurar? ";
    cin >> elemento;
    ptr = v;
    posicao = 1;
    while(*ptr != elemento)
    {
        ptr++;
        posicao++;
    }
    cout << endl << "O elementos está na posição: " << posicao << endl;
    delete[] v;
    return 0;

}