#include <iostream>

using namespace std;

void Read(int *, int *, int *);
void Find(int *, int *, int *);

void (*Array[2])(int *, int *, int *) = {Read,Find};

int main(void)
{
    int *v,*ptr,tam,elemento,posicao;
    cout << "Tamanho do array de inteiros: ";
    cin >> tam;
    v = new int[tam];
    (*Array)(v,ptr,&tam);
    (*(Array+1))(v,ptr,&tam);
    delete[] v;
    return 0;
}

void Read(int *v, int *ptr, int *tam)
{
    ptr = v;
    cout << "Digite os elementos do array: " << endl;
    for(ptr; ptr < (v+*tam); ptr++)
    {
        cin >> *ptr;
    }
}

void Find(int *v, int *ptr, int *tam)
{
    int elemento,posicao;
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
}