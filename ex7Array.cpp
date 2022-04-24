#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void maximoMinimo(int *v, int N, int *maximo, int *minimo)
{
    int *ptr;
    int random;
    srand(time(NULL));
    ptr = v-1;
    while(ptr < (v+N))
    {
        random = rand() % (*maximo+1);
        if(random >= *minimo)
        {
            ptr++;
            *ptr = random;
        }
    }
}

void leitura(int *v, int N)
{
    int *ptr = v;
    cout << endl << "Valores do vetor: " << endl;
    for(ptr; ptr < (v+N); ptr++)
    {
        cout << *ptr << " "; 
    }
    cout << endl;
}

void (*Array1)(int *, int, int *, int *) = {maximoMinimo};
void (*Array2)(int *, int) = {leitura};

int main(void)
{
    int N,maximo,minimo;
    cout << "Tamanho: ";
    cin >> N;
    cout << "Máximo: ";
    cin >> maximo;
    cout << "Minímo: ";
    cin >> minimo;
    int v[N];
    Array1(v,N,&maximo,&minimo);
    Array2(v,N);
    return 0;
}