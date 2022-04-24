#include <iostream>

using namespace std;

void Swap(char *, char *, char *, char *);

void (*Array)(char *, char *, char *, char *) = Swap;

int main(void)
{
    char *array1,*array2,*ptr1,*ptr2,tam;
    cout << "Tamanho dos arrays: ";
    cin >> tam;
    array1 = new char[tam];
    array2 = new char[tam];
    (*Array)(array1,array2,ptr1,ptr2);
    cout << endl << "Após a troca:" << endl << endl;
    cout << "Conteudo do primeiro array: " << array1 << endl;
    cout << "Conteudo do segundo array: " << array2 << endl;
    delete[] array1;
    delete[] array2;
    return 0;
}

void Swap(char *array1, char *array2, char *ptr1, char *ptr2)
{
    char aux;
    cout << "Escreva o primeiro array de char: ";
    cin >> array1;
    cout << "Escreva o segundo array de char: ";
    cin >> array2;
    ptr1 = array1;
    ptr2 = array2;
    while(*ptr1 != '\0' && *ptr2 != '0')
    {
        aux = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = aux;
        ptr1++;
        ptr2++;
    }

}