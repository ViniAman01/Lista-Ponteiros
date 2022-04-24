#include <iostream>

using namespace std;

int main(void)
{
    char str[100],*ptr,aux;
    int tam,i;
    tam = i = 0;
    cout << "Digite uma string: ";
    cin >> str;
    ptr = str;
    while(*(ptr++) != '\0')
    {
        tam++;
    }
    ptr = str;
    for(ptr; ptr < (str+tam/2); ptr++)
    {
        i++;
        aux = *ptr;
        *ptr = *((str+tam)-i);
        *((str+tam)-i) = aux;
    }
    cout << str << endl;
    return 0;
}